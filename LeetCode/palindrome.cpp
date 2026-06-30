#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers cannot be palindrome
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        // Reverse only half the number
        while(x > rev){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        return (x == rev || x == rev/10);
    }
};

int main(){

    int num;

    cout << "Enter an integer: ";
    cin >> num;

    Solution s;

    if(s.isPalindrome(num)){
        cout << "The number is a palindrome." << endl;
    }

    else{
        cout << "The number is NOT a palindrome." << endl;
    }

    return 0;
}