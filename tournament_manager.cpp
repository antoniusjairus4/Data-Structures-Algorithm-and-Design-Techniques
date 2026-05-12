#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

class Player {
    protected:
        int player_id;
        string name;
        int age;

    public:
        Player() {
            player_id = 0;
            name = "";
            age = 0;
        }

        Player(int id, string n, int a) {
            player_id = id;
            name = n;
            age = a;
        }

        void display_basics() {
            cout << endl << "Player ID : " << player_id << endl;
            cout << "Name      : " << name << endl;
            cout << "Age       : " << age << endl;
        }

        int get_id() {
            return player_id;
        }
};

class Table_Tennis : public Player {
    private:
        int matches_won;
        float reaction_speed;

    public:
        Table_Tennis() {
            matches_won = 0;
            reaction_speed = 0.0;
        }

        Table_Tennis(int id, string n, int a, int m, float r) : Player(id, n, a) {
            matches_won = m;
            reaction_speed = r;
        }

        float calculate_score() { 
            return (matches_won * 10) + (reaction_speed * 2);
        }

        void display_details() {
            
            display_basics();

            cout << "Sport : Table Tennis" << endl;
            cout << "Matches won : " << matches_won << endl;
            cout << "Reaction Speed " << reaction_speed << endl;
            cout << "Score : " << calculate_score() << endl;
        }
};

class Chess_Player : public Player {
    private:
        int ratings;
        int tournaments;

    public:
        Chess_Player() {
            ratings = 0;
            tournaments = 0;
        }

        Chess_Player(int id, string n, int a, int r, int t) : Player(id, n, a){
            ratings = r;
            tournaments = t;
        }

        double calculate_score() {
            return (ratings / 100.0) + (tournaments * 15);
        }

        void display_details() {
            
            display_basics();
            
            cout << "Sport : Chess" << endl;
            cout << "Ratings : " << ratings << endl;
            cout << "Tournaments Won : " << tournaments << endl;

            cout << "Score : " << calculate_score() << endl;
        }
};

