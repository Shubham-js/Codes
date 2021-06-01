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


node* insertInBST(node*root, int d)
{
	if (root == NULL)
	{
		return new node(d);
	}
	if (d <= root->data)
	{
		root->left = insertInBST(root->left, d);
	}
	else
	{
		root->right = insertInBST(root->right, d);
	}
	return root;
}
node* build() {
	//Read a list of numbers till -1 and also these numbers will be inserted into BST
	int d;
	cin >> d;

	node*root = NULL;

	while (d != -1) {
		root = insertInBST(root, d);
		cin >> d;
	}
	return root;
}
//Print the BST Level By Level
void bfs(node *root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		if (f == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << f->data << ",";
			q.pop();

			if (f->left) {
				q.push(f->left);
			}
			if (f->right) {
				q.push(f->right);
			}
		}
	}
	return;
}
class LinkedList {
public:
	node*head = NULL;
	node*tail = NULL;

};
LinkedList flatten(node*root)
{
	LinkedList l;
	if (root == NULL)
	{
		return l;
	}
//leaf node
	if (root->left == NULL and root->right == NULL)
	{

		l.head = root;
		l.tail = root;
		return l;
	}
	if (root->left != NULL and root->right == NULL)
	{
		LinkedList leftie = flatten(root->left);
		leftie.tail->right = root;
		l.tail = root;
		l.head = leftie.head;
		return l;
	}
	if (root->right != NULL and root->left == NULL) {
		LinkedList rightie = flatten(root->right);
		root->right = rightie.head;
		l.head = root;
		l.tail = rightie.tail;
		return l;
	}
	//both not null case 4
	LinkedList le = flatten(root->left);
	LinkedList ri = flatten(root->right);
	//post order
	le.tail->right = root;
	root->right = ri.head;
	l.head = le.head;
	l.tail = ri.tail;
	return l;

}


int main() {
	node*root = build();
	bfs(root);
	LinkedList l = flatten(root);
	node* temp = l.head;
	while (temp != NULL)
	{
		cout << temp->data << " -->";
		temp = temp->right;
	}
}

