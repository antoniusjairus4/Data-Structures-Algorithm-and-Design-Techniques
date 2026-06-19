#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int n;
    if(!(cin >> n) || n <= 0){
        cout << "Invalid input";
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int current_min = abs(arr[i] - arr[j]);

            if(current_min < min){
                min = current_min;
            }
        }
    }

    cout << min;
}