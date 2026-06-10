#include <iostream>

using namespace std;

class GCD_Modulo{
    
    public:
        int num_1, num_2;

        int calculate() {
            int a = num_1;
            int b = num_2;

            if(a <= 0 || b <= 0){
                return -1;
            }

            while (b != 0){
                int temp = b;
                b = a % b;
                a = temp;
            }

            return 0;
        }
};

int main()
{
    GCD_Modulo g;

    cout << "Enter a number : ";
    cin >> g.num_1;

    cout << "Enter a number : ";
    cin >> g.num_2;

    int result = g.calculate();

    if(result == -1){
        cout << "Invalid input";
    }

    else{
        cout << "The GCD is: " << result << endl;
    }
    
    return 0;
}