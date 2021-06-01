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
	root->left = buildTree();
	root->right = buildTree();
	return root;
}
void preorderIterative(node* root)
{
	if (root->data == -1)
		return;

	stack<node*> st;
	node* curr = root;
	while (!st.empty() || curr != NULL) {

		while (curr != NULL) {
			cout << curr->data << " ";

			if (curr->right)
				st.push(curr->right);

			curr = curr->left;
		}


		if (!st.empty()) {
			curr = st.top();
			st.pop();
		}
	}
}
void inOrderIterative(node*root)
{
	stack<node *> s;
	node *curr = root;

	while (curr != NULL || s.empty() == false)
	{
		/* Reach the left most Node of the
		   curr Node */
		while (curr !=  NULL)
		{
			/* place pointer to a tree node on
			   the stack before traversing
			  the node's left subtree */
			s.push(curr);
			curr = curr->left;
		}

		/* Current must be NULL at this point */
		curr = s.top();
		s.pop();

		cout << curr->data << " ";

		/* we have visited the node and its
		   left subtree.  Now, it's right
		   subtree's turn */
		curr = curr->right;

	} /* end of while */
}



int main() {

	node* root = buildTree();
	preorderIterative(root);
	cout << endl;
	inOrderIterative(root);
	return 0;


}