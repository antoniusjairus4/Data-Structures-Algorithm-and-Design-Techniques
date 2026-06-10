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
        }
    

};

int main()
{
    return 0;
}