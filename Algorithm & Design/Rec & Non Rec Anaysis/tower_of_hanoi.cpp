#include <iostream>
#include <string>

using namespace std;

void tower_hanoi(int n, char s, char a, char d){
    if(n == 0){
        return;
    }

    tower_hanoi(n - 1, s, d, a);
    
    cout << "Move disk " << n << " from " << s << " to " << d << endl;

    tower_hanoi(n - 1, a, s, d);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the Tower: ";
    if(!(cin >> n) || n < 1){
        cout << "Invalid input";
        return 0;
    }

    tower_hanoi(n, 'A', 'B', 'C');
    return 0;
}