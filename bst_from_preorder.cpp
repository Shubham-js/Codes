#include<bits/stdc++.h>

using namespace std;
class node {
public:
	int data;
	node*left;
	node*right;
	node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;

	}

};
node * build_from_preorder(int*pre, int*inp, int s, int e)
{
	static int i = 0;
	node*root = new node(pre[i]);
	while (s < e)
	{

		int index = -1;
		for (int j = s; j <= s; j++)
		{
			if (pre[i] == inp[j])
			{
				index = j;
				break;
			}
		}
		root->left = build_from_preorder(pre, inp, s, index - 1);
		root->right = build_from_preorder(pre, inp, index + 1, e);
	}
	return root;
}
void bfs(node * root)
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

}


int main() {
	int pre[] = {5, 3, 1, 7, 6, 8};
	int inp[] = {1, 3, 5, 6, 7, 8};
	node*root = build_from_preorder(pre, inp, 0, 5);
	//cout << root->data << endl;
	bfs(root);
	return 0;


}

