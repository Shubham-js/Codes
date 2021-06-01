/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    void distcal(TreeNode* root, int k)
    {
        if (root == nullptr)
        {
            return;
        }
        if (k == 0)
        {
            v.push_back(root->val);
            return;
        }
        distcal(root->left, k - 1);
        distcal(root->right, k - 1);

    }
    int nodesatk(TreeNode* root, TreeNode* target, int k)
    {
        if (root == nullptr)
        {
            return -1;
        }
        if (root == target)
        {
            distcal(root, k);
            return 0;
        }
        int dl = nodesatk(root->left, target, k);
        if (dl != -1)
        {
            if (dl + 1 == k)
            {
                v.push_back(root->val);

            }
            else
            {
                distcal(root->right, k - dl - 2);
            }
            return 1 + dl;
        }
        int dr = nodesatk(root->right, target, k);
        if (dr != -1)
        {
            if (dr + 1 == k)
            {
                v.push_back(root->val);

            }
            else
            {
                distcal(root->left, k - dr - 2);
            }
            return 1 + dr;
        }
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        nodesatk(root, target, k);

        return v;
    }
};