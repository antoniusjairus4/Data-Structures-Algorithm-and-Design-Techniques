#include <iostream>
#include <string>

using namespace std;

bool is_Prime(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter an number";
    if(!(cin >> n) || n < 1){
        cout << "Invalid input";
        return 0;
    }

    if(n <= 2 || n % 2 != 0){
        cout << "Enter an even number";
        return 0;
    }

    bool is_valid = false;
    for(int i = 2; i <= n / 2; i++){
        if(is_Prime(i) && is_Prime(n - i)){
            cout << i << " " << (n - i);
            is_valid = true;
            return 0;
        }
    }

    if(!(is_valid)){
        cout << "False operation";
    }
    return 0;
}