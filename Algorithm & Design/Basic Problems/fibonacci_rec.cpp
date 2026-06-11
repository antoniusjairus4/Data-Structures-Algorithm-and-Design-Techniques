#include <iostream>
#include <string>

using namespace std;

class Find_Fib{
    public:
        int n;
        
        int fibonacci (int n) {
            if(n == 1){
                return 0;
            }

            else if(n == 2){
                return 1;
            }

            else{
                return fibonacci(n - 1) + fibonacci(n - 2);
            }
        }
};

int main()
{
    Find_Fib f;

    int n;
    cout << "Enter a number : ";
    if(!(cin >> n) || n < 1){
        cout << "Invalid input";
        return 0;
    }

    cout << f.fibonacci(n);
    return 0;
}