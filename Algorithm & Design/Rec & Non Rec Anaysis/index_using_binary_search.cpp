#include <iostream>

using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    if (target < arr[mid]) {
        return binarySearchRecursive(arr, low, mid - 1, target);
    }

    return binarySearchRecursive(arr, mid + 1, high, target);
}

int search(int arr[], int n, int target) {
    return binarySearchRecursive(arr, 0, n - 1, target);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[1000]; 
    cout << "Enter " << n << " integers in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    int result = search(arr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}