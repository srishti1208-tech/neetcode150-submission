/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void treeToArray(TreeNode* root, vector<int>& arr) {

        if (root == NULL) {
            arr.push_back(-1);
            return;
        }

        arr.push_back(root->val);

        treeToArray(root->left, arr);

        treeToArray(root->right, arr);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int> arr1;
        vector<int> arr2;

        treeToArray(p, arr1);
        treeToArray(q, arr2);

        return arr1 == arr2;
    }
};
