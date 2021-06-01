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

node* buildTree() {
	int d;
	cin >> d;

	if (d == -1) {
		return NULL;
	}
	node * root = new node(d);
	root->left = buildTree() and root->right = buildTree();

	return root;

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
int main()
{
	node*root = buildTree();
	bfs_secondmethod(root);
	return 0;
}