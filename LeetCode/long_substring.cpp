#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int maxLength = 0;

        for(int i = 0; i < n; i++){

            bool found[256] = {false};

            for(int j = i; j < n; j++){

                if(found[s[j]]){
                    break;
                }

                found[s[j]] = true;

                maxLength = max(maxLength, j - i + 1);
            }
        }

        return maxLength;
    }
};

int main(){

    string s;

    cout << "Enter a string: ";
    cin >> s;

    Solution sol;

    int result = sol.lengthOfLongestSubstring(s);

    cout << "Length of longest substring without repeating characters: " << result << endl;

    return 0;
}