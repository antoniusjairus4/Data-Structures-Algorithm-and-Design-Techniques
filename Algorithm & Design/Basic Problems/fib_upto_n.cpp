#include <iostream>
#include <string>

using namespace std;

void fibonacci(int n){
    int first = 0, second = 1, next;

    for(int i = 0; i < n; i++){
        if(i <= 1){
            next = i;
        }

        else{
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

int main()
{
    int n;
    if(!(cin >> n) || n < 2){
        cout << "Invalid input";
        return 0;
    }

    cout << "The fibonacci series upto n terms are : ";
    fibonacci(n);
    return 0;
}