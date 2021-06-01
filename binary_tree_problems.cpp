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

void buildTree(node*&root) {
	int d;
	cin >> d;

	if (d == -1) {
		return;
	}
	root = new node(d);
	buildTree(root->left);
	buildTree(root->right);

}
int count(node*root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + count(root->left) + count(root->right);
}
int sum_of_nodes(node*root)
{
	if (root == NULL)
	{
		return 0;
	}
	return root->data + sum_of_nodes(root->left) + sum_of_nodes(root->right);
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
int height(node*root) {
	if (root == NULL)
	{
		return 0;
	}
	int l = height(root->left);
	int r = height(root ->right);
	return max(l, r) + 1;

}
int diameter(node*root)
{
	if (root == NULL)
	{
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	int op1 = h1 + h2;
	int op2 = diameter(root->right);
	int op3 = diameter(root->left);
	return max(op1, max(op2, op3));
}
pair<int, int> fastDiameter(node*root) {

	pair<int, int>p;
	if (root == NULL)
	{
		p.first = p.second = 0;
		return p;
	}
//otherwise
	pair<int, int> left = fastDiameter(root->left);
	pair <int, int>right = fastDiameter(root->right);
	p.first = max(left.second, right.second) + 1;
	p.second = max((left.first + right.first), max(left.second, right.second));
	return p;

}
void replace_node(node*&root) {


	if (root == NULL)

	{
		return;
	}
	if (root->left or root->right)
		root->data = sum_of_nodes(root->left) + sum_of_nodes(root->right);
	replace_node(root->left);
	replace_node(root->right);
	return;






}


void bfs(node*root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{

		node*current = q.front();
		if (current == NULL)
		{
			cout << endl;

			//cout << endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}

		}
		else
		{
			cout << current->data << " ";
			q.pop();
			if (current->left)
			{
				q.push(current->left);

			}
			if (current->right) {
				q.push(current->right);
			}
		}
	}

	return;
}


bool isBalancedTree(node*root) {
	if (root == NULL)
	{
		return true;
	}
	int left = height(root->left);
	int right = height(root->left);
	if (abs(left - right) > 1)
	{
		return false;
	}

}

int main()
{
	node*root = NULL;
	buildTree(root);
	preorder(root);
	cout << endl;
	cout << count(root) << endl;
	cout << sum_of_nodes(root) << endl;
	cout << height(root) << endl;
	cout << diameter(root) << endl;
	pair<int, int>p;
	p = fastDiameter(root);
	cout << p.first << " " << p.second << endl;
	bfs (root);
	replace_node(root);
	bfs(root);
	if (isBalancedTree(root))
	{
		cout << "Balanced Tree" << endl;
	}
	else
	{
		cout << "Not a Balanced Tree" << endl;
	}
	return 0;

}