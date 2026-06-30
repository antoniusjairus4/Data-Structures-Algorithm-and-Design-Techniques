#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    TreeNode* buildBST(vector<int> &nums, int left, int right){
        if(left > right){
            return nullptr;
        }

        int mid = left + (right - left) / 2;

        TreeNode *root = new TreeNode(nums[mid]);

        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }
};

// 🔥 Inorder traversal (to verify BST)
void inorder(TreeNode* root){
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted elements:\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Solution obj;
    TreeNode* root = obj.sortedArrayToBST(nums);

    cout << "\nInorder traversal of constructed BST:\n";
    inorder(root);

    return 0;
}