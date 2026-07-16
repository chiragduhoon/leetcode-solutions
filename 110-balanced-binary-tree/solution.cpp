/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int Lheight = height(root->left);
        if (Lheight == -1) {
            return -1;
        }
        int Rheight = height(root->right);
        if (Rheight == -1) {
            return -1;
        }
        if (abs(Lheight - Rheight) > 1) {
            return -1;
        }
        return 1 + max(Lheight, Rheight);
    }
    bool isBalanced(TreeNode* root) { return height(root) != -1; }
};