#include <bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*left, *right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* Balance_Tree(int* a, int s, int e )
{
	if (s > e)
	{
		return NULL;
	}
	//recursive case
	int mid = (s + e) / 2;
	node * root = new node(a[mid]);

	root->left = Balance_Tree(a, s, mid - 1);
	root->right = Balance_Tree(a, mid + 1, e);
	return root;


}
void bfs(node*root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{

		node*curr = q.front();
		if (curr == NULL)
		{
			cout << endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else {
			cout << curr->data << " ";
			q.pop();
			if (curr->left)
				q.push(curr->left);
			if (curr->right)
				q.push(curr->right);
		}

	}

}

node * PreInTree(int*pre, int*in, int s, int e)
{	static int i = 0;
	//base case
	if (s > e)
	{
		return NULL;
	}
	node*root = new node(pre[i]);
	int index = -1;
	for (int j = s; j <= e ; ++j)
	{
		if (pre[i] == in[j])
		{
			index = j;
			break;
		}
	}
	i++;
	root->left = PreInTree(pre, in, s, index - 1);
	root->right = PreInTree(pre, in, index + 1, e);
	return root;


}
void right_view(node*root, int level, int &maxlevel) {
	if (root == NULL)
	{
		return;
	}
	if (maxlevel < level) {
		cout << root->data << " ";
		maxlevel = level;
	}

	right_view(root->right, level + 1, maxlevel);


	right_view(root->left, level + 1, maxlevel);
}
int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7;
	node*root = Balance_Tree(a, 0, n - 1);
	bfs(root);
	int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
	int in[] = {3, 2, 8, 4, 1, 6, 7, 5};
	node*p = PreInTree(pre, in, 0, 7);
	bfs(p);
	int m = -1;
	right_view(p, 0, m);
	return 0;
}