#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*left;
	node*right;
	node(int d) {
		left = NULL;
		right = NULL;
		data = d;
	}
};
node* insertInBST(node *root, int data) {
	//Base Case
	if (root == NULL) {
		return new node(data);
	}
	//Rec Case - Insert in the Subtree and Update Pointers
	if (data <= root->data) {
		root->left = insertInBST(root->left, data);
	}
	else {
		root->right = insertInBST(root->right, data);
	}
	return root;
}
node* build() {
	//Read a list of numbers till -1 and also these numbers will be inserted into BST
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	node*root = NULL;

	while () {

		root = insertInBST(root, a[mid]);

	}
	return root;
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

		//both are inclusive ie the start and the end limit.
		node*root = NULL;
		root = build();
		preorder(root);
	}
	return 0;
}