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
 int findSum(TreeNode* root, int &sum)
 {
    if(root==NULL) return 0;
    int leftSum = max(0,findSum(root->left,sum));
    int rightSum = max(0,findSum(root->right,sum));

    sum= max(sum,leftSum+rightSum+root->val);

    return root->val+max(leftSum,rightSum);
 }
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        findSum(root,sum);
        return sum;
    }
};