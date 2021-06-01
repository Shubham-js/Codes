#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtTail(node*&head, int data)
{
	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	else
	{
		node*tail = head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		node*temp = new node(data);
		tail->next = temp;

	}
}

void take_Input(node*&head, int x)
{
	int d;
	while (x--) {
		cin >> d;
		insertAtTail(head, d);
	}
}



void print(node * head) {
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

node* merge_linked_list(node*a, node*b)
{
	//base case
	if (a == NULL)
	{
		return b;
	}
	if (b == NULL)
	{
		return a;
	}
	//recursive case
	node*c;
	if (a->data <= b->data)
	{
		c = a;
		c->next = merge_linked_list(a->next, b);
	}
	else
	{
		c = b;
		c->next = merge_linked_list(a, b->next);
	}
	return c;
}



int main() {
	int t;
	cin >> t;
	int n, m;
	while (t--) {
		cin >> n;
		node*a = NULL, *b = NULL;
		take_Input(a, n);
		cin >> m;
		take_Input(b, m);
		// print(a);
		// print(b);
		node * ans = NULL;
		ans = merge_linked_list(a, b);
		print(ans);


	}
	return 0;
}