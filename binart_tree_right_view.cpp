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
	int count = 0;
	void rightview(TreeNode *root, queue<pair<int, int>>&q, int c)
	{
		q.push(make_pair(root->val, c));
		count = max(c, count);
		if (root->left)
		{
			rightview(root->left, q, c + 1);
		}
		if (root->right)
		{
			rightview(root->right, q, c + 1);
		}

		return;
	}
	vector<int> rightSideView(TreeNode* root) {
		if (root == nullptr)
		{
			return {};
		}
		queue<pair<int, int>>q;
		int c = 0;
		rightview(root, q, c);
		// cout<<c<<endl;
		vector<int>v;
		for (int i = 0; i <= count; i++)
		{
			v.push_back(0);
		}
		cout << v.size() << endl;
		// cout<<count<<endl;
		while (!q.empty())
		{
			// cout<<q.front().first<<" "<<q.front().second<<endl;
			pair<int, int>p = q.front();
			v[p.second] = p.first;


			q.pop();
		}



		return v;
	}
};