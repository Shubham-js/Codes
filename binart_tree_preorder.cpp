#include <iostream>
#include<queue>
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

	if (d == -1) {
		return NULL;
	}
	node * root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void printPre(node *root) {
	if (root == NULL) {
		return;
	}
	//Otherwise, print root first followed by subtrees(children)
	cout << root->data << " ";
	printPre(root->left);
	printPre(root->right);
}
void printIn(node *root)
{
	if (root == NULL) {
		return;
	}


	printIn(root->left);
	cout << root->data << " ";
	printIn(root->right);
}
void printPost(node *root)
{
	if (root == NULL) {
		return;
	}


	printPost(root->left);

	printPost(root->right);
	cout << root->data << " ";
}
int calculate_height(node *root)
{
	//base case
	if (root == NULL)
	{
		return 0;
	}
	int l = calculate_height(root->left);
	int r = calculate_height(root->right);
	return max(l, r) + 1;
}

void print_at_level(node*root, int k)
{
	if (root == NULL)
	{
		return;
	}
	if (k == 1)
	{
		cout << root->data << " ";
		return;

	}
	print_at_level(root->left, k - 1);
	print_at_level(root->right, k - 1);
	return;
}
void print_all_levels(node*root)
{
	int h = calculate_height(root);
	for (int i = 1; i <= h ; ++i)
	{
		print_at_level(root, i);
		cout << endl;
	}

}
void bfs_pairmethod(node * root)
{	int c = 0, x = 0;
	queue<pair<node*, int>> q;
	q.push(make_pair(root, c));

	while (q.size() != 0)
	{
		node * current = q.front().first;
		if (q.front().second > x)
		{
			cout << endl;
			x = c;
		}
		cout << current->data << " ";
		q.pop();
		c++;
		if (current->left)
		{
			q.push(make_pair(current->left, c));

		}
		if (current->right) {
			q.push(make_pair(current->right, c));
		}

	}
	return;
}
void bfs_secondmethod(node*root)
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

int main() {
	node* root = buildTree();
	printPre(root);
	cout << endl;
	printPost(root);
	cout << endl;
	printIn(root);
	cout << endl;
	cout << calculate_height(root) << endl;
	print_at_level(root, 1);
	cout << endl;
	print_all_levels(root);
	bfs_pairmethod(root);
	cout << endl;
	bfs_secondmethod(root);


	return 0;
}










