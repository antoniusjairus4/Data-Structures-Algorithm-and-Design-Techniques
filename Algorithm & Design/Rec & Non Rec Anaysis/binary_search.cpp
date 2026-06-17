#include <iostream>
#include <string>

using namespace std;

int Binary_Search(int arr[], int n, int target, int left, int right){
    if(left > right){
        return -1;
    }

    int mid = (left + right) / 2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] > target){
        return Binary_Search(arr, n, target, left, mid - 1);
    }

    return Binary_Search(arr, n, target, mid + 1, right);
}
int main()
{
    int n;
    cin>>n;
    if(n < 0){
        cout << "Invalid input";
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int target;
    cin >> target;

    cout << Binary_Search(arr, n, target, 0, n - 1);
    return 0;
}