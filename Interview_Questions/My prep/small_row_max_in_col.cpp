/*
Problem: The Hidden Signal Grid

Description:
A satellite monitoring system stores signal strengths in a grid format. Each row 
represents a transmission channel, and each column represents a frequency band. 
Engineers discovered that a special signal position exists when a value is:
1. The smallest element in its row.
2. At the same time the largest element in its column.

Task:
Determine whether such a position exists in the grid. If it exists, display the 
value. If multiple such positions exist, display the first one found while 
scanning row-wise. If no such position exists, display "No Stable Point".

Input Format:
- First line contains two integers representing number of rows and columns.
- Next lines contain space-separated integers representing the matrix.

Output Format:
- Print the value of that element, if a special position exists.
- Print "No Stable Point", if no such position exists.
- Print "Invalid input" if the number of rows or columns is negative.

Constraints:
- -10 <= rows, columns <= 10
- -100 <= matrix[i][j] <= 100
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m, n;
    if(!(cin >> m >> n) || m < 0 || n < 0){
        cout << "Invalid input" << endl;
        return 0;
    }

    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    bool found = false;

    for(int i = 0; i < m; i++){
        int min_row = arr[i][0];
        int col_index = 0;

        for(int j = 0; j < n; j++){
            if(arr[i][j] < min_row){
                min_row = arr[i][j];
                col_index = j;
            }
        }

        bool col_max = true;
        for(int k = 0; k < m; k++){
            if(arr[k][col_index] > min_row){
                col_max = false;
                break;
            }
        }

        if(col_max){
            cout << min_row << endl;
            found = true;
            return 0;
        }
    }

    if(!(found)){
        cout << "Unable to find the element";
        return 0; 
    }

    return 0;
}