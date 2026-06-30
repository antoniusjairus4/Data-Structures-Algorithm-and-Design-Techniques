#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;

                char top = st.top();
                
                if ((c == ')' && top == '(') || 
                    (c == ']' && top == '[') || 
                    (c == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution sol;
    string userInput;

    cout << "Enter a string of brackets (e.g., {([])}): ";
    
    getline(cin, userInput);

    if (sol.isValid(userInput)) {
        cout << "Result: The string is VALID." << endl;
    } else {
        cout << "Result: The string is INVALID." << endl;
    }

    return 0;
}