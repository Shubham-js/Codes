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
node* build_Tree()
{
	int d;
	cin >> d;
	int child;
	cin >> child;
	node*root = new node(d);


	if (child == 2) {
		root->left = build_Tree();
		root->right = build_Tree();
	}
	if (child == 1)
	{
		root->left = build_Tree();
	}
	return root;
}
void level_order(node*root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	if (root->left)
		level_order(root->left);
	if (root->right)
		level_order(root->right);
	return;
}
void print_at_level(node*root, int k, int &sum)
{
	if (root == NULL)
	{
		return;
	}
	if (k ==  0)
	{
		sum += root->data;


	}
	if (k < 0)
	{
		return;
	}

	print_at_level(root->left, k - 1, sum);
	print_at_level(root->right, k - 1, sum);
	return;
}

int main() {
	node*root = build_Tree();
	level_order(root);
	cout << endl;
	int l; cin >> l;
	int sum = 0;
	print_at_level(root, l, sum);
	cout << sum;
	return 0;
}