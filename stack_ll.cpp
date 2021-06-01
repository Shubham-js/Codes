#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*next;

	node(int d)
	{
		data = d;
	}
};

node*head = NULL;
void push(int d)
{
	if (head == NULL)
	{
		head = new node(d);
	}
	else
	{
		node*temp = new node(d);
		temp->next = head;
		head = temp;

	}
}

void pop()
{

	if (head == NULL)
	{
		cout << "Empty" << endl;
	}
	else
	{
		node*str = head;
		head = head->next;
		str->next = NULL;
	}
}
int top()
{
	if (head == NULL)
	{
		return -1;
	}
	else
	{
		return head->data;
	}
}
bool empty()
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

int main()
{
	push(5);
	push(6);
	push(7);
	push(8);
	cout << top() << endl;
	pop();
	cout << top() << endl;
	cout << empty() << endl;

	return 0;
}