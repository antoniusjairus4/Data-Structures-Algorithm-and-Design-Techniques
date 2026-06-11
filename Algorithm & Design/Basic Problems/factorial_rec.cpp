#include <iostream>
#include <string>

using namespace std;

class Find_Fact{
    public:
        int n;

        int factorial(int n){
            if(n < 1){
                return 1;
            }

            else{
                return n * factorial (n - 1);
            }
        }
};

int main()
{
    Find_Fact f;

    int n;
    if(!(cin >> n) || n < 0){
        cout << "Invalid input";
        return 0;
    }
    
    cout << f.factorial(n);
}