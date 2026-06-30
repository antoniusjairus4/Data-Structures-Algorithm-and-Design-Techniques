#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {

    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector <int> nums(n);

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    Solution s;
    vector<int> result = s.twoSum(nums, target);

    if(result.size() == 2){
        cout << "Index of numbers that add to target value: ";
        cout << result[0] << " " << result[1] << endl;
    }
    else{
        cout << "No pair found." << endl;
    }

    return 0;
}