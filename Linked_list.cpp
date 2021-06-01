#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};
//Using Class ie OOPs
// class LinkedList {
// 	node* head, *tail;
// public:
// 	LinkedList() {
// 		head = NULL;
// 		tail = NULL;
// 	}
// 	void insert(int d) {

// 		if (head == NULL)
// 		{
// 			head = new node(d);
// 			tail = head;

// 			return;

// 		}

// 		node* temp = new node(d);


// 		tail->next = temp;
// 		tail = tail->next;


// 		return;



// 	}
// 	void print() {
// 		while (head != NULL)
// 		{
// 			cout << head->data << " ";
// 			head = head->next;
// 		}
// 		cout << endl;
// 		return;

// 	}

// };
// int main()
// {
// 	LinkedList l;
// 	l.insert(3);
// 	l.insert(2);
// 	l.insert(1);
// 	l.insert(0);
// 	l.print();
// 	return 0;

// }


//using POP
//call by reference to change the head time to time ie modificaiton of orignal
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
	cin >> d;
	node *head = NULL;
	while (d != -1) {
		insertAtHead(head, d);
		cin >> d;
	}
	return head;
}
void print(node * head) {
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

//operator overloading  method 1 the return is void so we cant use it again in continuous case like cout<<head1<<head2;
// void operator<<(ostream &cout, node* head) {
// 	print(head);
// 	return ;
// }
//operator overlaoding cascading of leftshift operator
ostream& operator<<(ostream &cout , node *&head)
{

	print(head);
	return cout;
}
istream& operator>>(istream &cin, node* &head)
{
	head = take_input();
	return cin;
}


// call by value ie creating a copy and working

void reverse(node* &head)
{
	node * current = head;
	node* prev = NULL;
	node *n;
	while (current != NULL)
	{
		n = current->next;

		current->next = prev;

		prev = current;
		current = n;


	}
	head = prev;
}
node* reverseRec(node* &head)
{
	if (head == NULL or head->next == NULL)
	{
		return head;
	}
	node* end = reverseRec(head->next);
	head->next->next = head;
	head->next = NULL;
	return end;
}


int mid(node*head, int k)
{
	node*fast = head;
	node*slow = head;
	while (k--)
	{
		fast = fast->next;
	}
	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;

}

bool cycle (node*head)
{
	node*fast = head;
	node*slow = head;
	while (fast != NULL or fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow ) {
			return true;
		}

	}
	return false;
}

int main() {
	// node *head = NULL, *tail = NULL;
	// insertAtHead(head, 3);
	// insertAtHead(head, 4);
	// insertAtHead(head, 5);
	// insertAtHead(head, 6);

	//node *head = take_input();
	node *head1, *head2;
	cin >> head1 >> head2;
	cout << "Before reverse" << endl;
	cout << head1 << " " << head2;


	reverse(head1);
	head2 = reverseRec(head2);
	cout << "After reverse" << endl;
	cout << head1 << " " << head2;

	int middle = mid(head2, 2);
	cout << middle << endl;
	node*head3;
	cin >> head3;
	cout << head3 << endl;

	cout << cycle(head3) << endl;



	//print(head);
	return 0;
}