#include<bits/stdc++.h>
using namespace std;



//Input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
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
node* buidtree(string s) {
	if (s == "true") {
		int d;
		cin >> d;
		node*root = new node(d);
		string l;
		cin >> l;
		if (l == "true") {
			root->left = buidtree(l);
		}
		string r;
		cin >> r;
		if (r == "true") {
			root->right = buidtree(r);
		}
		return root;
	}
	return NULL;
}




int isStructured(node*a, node*b)
{
	if (a == NULL and b == NULL)
	{
		return 1;
	}
	if (a != NULL and b != NULL) {
		return isStructured(a->left, b->left) and isStructured(a->right, b->right);
	}
	return 0;
}
int main() {
	node* root = buidtree("true");

	node*root2 = buidtree("true");
	int ans = isStructured(root, root2);
	if (ans)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	// vector<int>a = bfs(root);
	// vector<int>b = bfs(root2);
	// for (int i = 0; i < a.size(); i++)
	// {
	// 	if (a[i] != b[i])
	// 	{
	// 		cout << "false" << endl;
	// 		return 0;
	// 	}
	// }
	// cout << "true" << endl;
	// return 0;

}