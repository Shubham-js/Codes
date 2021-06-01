#include <bits/stdc++.h>
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
int main() {
	int n, k;
	cin >> n;
	node*head = NULL;
	take_Input(head, n);
	//print (head);
	cin >> k;
	if (k == n)
	{
		print (head);

	}
	else
	{
		if (k > n)
		{
			k = k - n;
		}

		node*start = head;
		n = n - k - 1;
		while (n--)
		{
			head = head->next;
		}
		//cout << head->data << endl;
		node*ptr = head->next;
		node*p = ptr;
		head->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = start;
		print(p);
	}



}