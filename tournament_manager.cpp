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
            
        }
};