#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

class Player{
    protected:
        int player_id;
        string name;
        int age;

    public:
        Player(){
            player_id = 0;
            name = "";
            age = 0;
        }

        Player(int id, string n, int a){
            player_id = id;
            name = n;
            age = a;
        }

        void display_basics(){
            cout << endl << "Player ID : " << player_id << endl;
            cout << "Name      : " << name << endl;
            cout << "Age       : " << age << endl;
        }

        int get_id(){
            return player_id;
        }
};

class Table_Tennis : public Player{
    private:
        int matches_won;
        float reaction_speed;

    public:
        Table_Tennis(){
            matches_won = 0;
            reaction_speed = 0.0;
        }

        Table_Tennis(int id, string n, int a, int m, float r) : Player(id, n, a)
        {
            matches_won = m;
            reaction_speed = r;
        }
};