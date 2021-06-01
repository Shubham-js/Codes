#include <bits/stdc++.h>
using namespace std;
class Node {
	int val;
	Node*left, *right;
	Node()
	{
		val = 0;
		left = nullptr;
		right = nullptr;
	}
	Node(int x)
	{
		val = x;
		left = nullptr;
		right = nullptr;
	}

}
Node* insert_into_bst(Node*root, int data)
{
	if (root == nullptr)
	{
		return new Node(data);

	}
	if (root->val <= data)
	{
		root->left = insert_into_bst(root, data);

	}
	else {
		root->right = insert_into_bst(root->right, data);
	}
	return root;
}
Node* buildBST(vector<int>&v)
{
	TreeNode*root = nullptr;
	for (int i = 0; i < v.size(); i++)
	{
		root = insert_into_bst(root, v[i]);
	}
	return root;
}
int main()
{

	return 0;
}