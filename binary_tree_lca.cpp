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
node * build_Tree(node* &root) {
	int data;
	cin >> data;
	if (root == NULL)
	{
		root = new node(data);
	}
	if (data == -1)
	{
		return NULL;
	}
	root->left = build_Tree(root->left);
	root->right = build_Tree(root->right);
	return root;
}
void bfs_single_line(node*root) {
	if (root == NULL)
	{
		return;

	}
	cout << root->data << " ";
	bfs_single_line(root->left);
	bfs_single_line(root->right);

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
int distance_calculator(node*root, int a)
{
	if (root == NULL)
	{
		return -1;
	}
	if (root->data == a)
	{
		return 0;
	}
	int l = distance_calculator(root->left, a);
	int r = distance_calculator(root->right, a);
	if (l != -1)
	{
		return l + 1;
	}
	if (r != -1)
		return r + 1;

}
node* lowestCommonAncestor(node* root, int p, int q) {
	if (root == nullptr or root->val == p or root->val == q)
	{
		return root;
	}
	node*left = lowestCommonAncestor(root->left, p, q);
	node*right = lowestCommonAncestor(root->right, p, q);
	if (left and right)
	{
		return root;
	}
	else if (left)
	{
		return left;
	}
	else
	{
		return right;
	}

}
};
int main() {
	node*root = NULL;
	build_Tree(root);
	bfs_single_line(root);
	cout << endl;


	bfs_secondmethod(root);
	cout << least_common_ancestor(root, 10, 11)->data << endl;


	//shortest distance between 2 nodes can be found by the +(sum)of their individual distances - 2*common paths
	int n1 = 11;
	int n2 = 7;
	int common_node = least_common_ancestor(root, n1, n2)->data;
	int ans = distance_calculator(root, n1) + distance_calculator(root, n2) - 2 * distance_calculator(root, common_node);
	cout << ans << endl;


	return 0;



}