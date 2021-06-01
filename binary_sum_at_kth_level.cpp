#include <bits/stdc++.h>
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
node* buildTree() {
	int d;
	cin >> d;
	int child;
	cin >> child;

	node * root = new node(d);
	if (child != 0) {
		root->left = buildTree();
		root->right = buildTree();
	}

	return root;
}
int print_at_level(node*root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 0)
	{
		return root->data;


	}
	int l = print_at_level(root->left, k - 1);
	int r = print_at_level(root->right, k - 1);
	int sum = l + r;
	return sum;
}

int main() {
	node*root = buildTree();
	int level;
	cin >> level;
	cout << print_at_level(root, level) << endl;

}