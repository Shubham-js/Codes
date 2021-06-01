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
    void inverter(TreeNode* root)
    {
        if (root == nullptr)
        {
            return;
        }
        inverter(root->left);
        inverter(root->right);
        if (root->left and root->right) {
            TreeNode* temp = root->left;
            root->left = root->right;

            root->right = temp;
        }
        else if (root->left)
        {
            root->right = root->left;
            root->left = nullptr;
        }
        else if (root->right)
        {
            root->left = root->right;
            root->right = nullptr;
        }
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        inverter(root);
        return root;
    }
};