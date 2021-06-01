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
    TreeNode* addition_helper(TreeNode* root, int v, int d)
    {
        if (d == 2)
        {
            TreeNode*x, *y;
            if (root->left)
            {
                x = new TreeNode(v, root->left, nullptr);
            }
            else
            {
                x = new TreeNode(v);
            }
            if (root->right)
            {
                y = new TreeNode(v, nullptr, root->right);
            }
            else
            {
                y = new TreeNode(v);
            }
            root->left = x;
            root->right = y;
            return root;

        }
        if (root->left)
            addition_helper(root->left, v, d - 1);
        if (root->right)
            addition_helper(root->right, v, d - 1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d == 1)
        {
            TreeNode* temp = new TreeNode(v, root, nullptr);
            return temp;
        }
        root = addition_helper(root, v, d);
        return root;
    }
};