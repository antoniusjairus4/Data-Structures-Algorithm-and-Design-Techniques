#include <iostream>
#include <algorithm>

using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    
    int arr[20];
    int dp[20];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }

    int maxLength = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (findGCD(arr[i], arr[j]) > 1) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if (dp[i] > maxLength) {
            maxLength = dp[i];
        }
    }

    cout << maxLength << endl;

    return 0;
}