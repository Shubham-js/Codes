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
    void inorder(TreeNode* root, vector<int>&v)
    {
        if (root == nullptr)
        {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
        return;

    }
    TreeNode* buildTree(vector<int>&v, int s, int e)
    {
        if (s > e)
        {
            return nullptr;
        }
        int mid = (s + e) / 2;
        TreeNode*temp = new TreeNode(v[mid]);
        temp->left = buildTree(v, s, mid - 1);
        temp->right = buildTree(v, mid + 1, e);
        return temp;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root, v);
        TreeNode* bal;
        bal = buildTree(v, 0, v.size() - 1);
        return bal;

    }
};