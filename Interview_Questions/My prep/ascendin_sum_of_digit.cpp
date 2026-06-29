#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sum_digit(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main(){
    int n;
    if(!(cin >> n) || n <= 0){
        cout << "Invalid input" << endl;
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            
            if(sum_digit(arr[j]) > sum_digit(arr[j + 1])){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}