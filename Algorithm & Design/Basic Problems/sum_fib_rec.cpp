#include <iostream>
#include <string>

using namespace std;

int fib(int n){
    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    return fib(n - 1) + fib (n - 2);
}

int fib_sum(int n){
    if(n <= 0){
        return 0;
    }

    if(n == 1){
        return 0;
    }

    return fib_sum(n - 1) + fib(n); 
}

int main(){
    int n;
    if(!(cin >> n) || n < 0){
        cout << "Invalid input";
        return 0;
    }

    cout << "Rabbit Pairs: " << fib_sum(n);
    return 0;
}