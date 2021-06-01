#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}

};
void insertAtHead(node *&head , int data) {
	if (head == NULL)
	{
		head = new node(data);



	}
	else
	{
		node *temp = new node (data);
		temp->next = head;

		head = temp;
	}
}
//taking input in linked list
node *take_input() {
	int d;

	node *head = NULL;
	while (cin >> d) {
		insertAtHead(head, d);

	}
	return head;
}
node* middle(node*head)
{

	node*slow = head;
	node*fast = head->next;

	while (fast != NULL and fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;

}

void print(node*head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
node* merge(node*&a, node*&b)
{
	if (a == NULL)
	{
		return b;
	}
	if (b == NULL)
	{
		return a;
	}
	node*c = NULL;
	if (a->data <= b->data)
	{
		c = a;
		c->next = merge(a->next, b);
	}
	else
	{
		c = b;
		c->next = merge(a, b->next);
	}
	return c;
}

node* mergesort(node*&head) {
	if (head == NULL or head->next == NULL)
	{
		return head;
	}
	//recursive cases
	node *mid = middle(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;

	a = mergesort(a);
	b = mergesort(b);
	node*c = merge(a, b);
	return c;


}


int main() {
	node*head = take_input();
	head = mergesort(head);
	print(head);



}