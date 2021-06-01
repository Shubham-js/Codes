#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*left;
	node*right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* insert_into_bst(node*root, int d)
{
	if (root == NULL)
	{
		return new node(d);
	}
	if (d <= root->data)
	{
		root->left = insert_into_bst(root->left, d);
	}
	else {
		root->right = insert_into_bst(root->right, d);
	}
	return root;

}
node* create_bst()
{
	int n;
	cin >> n;
	node*root = NULL;
	int d;
	for (int i = 0; i < n; ++i)
	{
		cin >> d;
		root = insert_into_bst(root, d);
	}
	return root;

}
void inorder(node*root, int k1, int k2)
{
	if (root == NULL)
	{
		return;
	}

	inorder(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2)
		cout << root->data << " ";
	inorder(root->right, k1, k2);


}
void preorder(node*root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int k1, k2;

		node*root = create_bst();
		cin >> k1 >> k2;
		cout << "# Preorder : ";
		preorder(root);
		cout << endl;
		cout << "# Nodes within range are : ";
		inorder(root, k1, k2);
		cout << endl;


	}
	return 0;
}