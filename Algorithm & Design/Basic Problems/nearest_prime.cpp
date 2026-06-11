#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    if(!(cin >> n) || n < 0){
        cout << "Invalid input";
        return 0;
    }

    if(n == 1){
        cout << "Invalid input";
        return 0;
    }

    for (int i = n; i >= 2; i--){
        bool prime = true;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }

        if(prime){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}