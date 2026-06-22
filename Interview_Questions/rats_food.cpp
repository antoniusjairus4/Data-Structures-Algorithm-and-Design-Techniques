#include <iostream>
#include <string>

using namespace std;

int main()
{
    int total_rats, food_rat, total_houses;
    if(!(cin >> total_rats >> food_rat >> total_houses)){
        cout << "Invalid input" << endl;
        return 0;
    }

    if(total_houses < 0 || food_rat < 0 || total_houses){
        cout << "Invalid input" << endl;
        return 0;
    }

    int total_food = total_rats * food_rat;
    
    int food_collected = 0;
    int house_visited = 0;

    
    return 0;
}