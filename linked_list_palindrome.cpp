#include<bits/stdc++.h>
using namespace std;
// class node {
// public:
// 	int data;
// 	node*next;
// 	node(int data)
// 	{
// 		this->data = data;
// 		next = NULL;
// 	}
// };
// void input_At_Head(node*&head, int data)
// {
// 	if (head == NULL)
// 	{
// 		head = new node(data);
// 	}
// 	else
// 	{
// 		node*temp = new node(data);
// 		temp->next = head;
// 		head = temp;
// 	}
// }
// node* take_Input(int n) {
// 	node*head = NULL;
// 	int d;
// 	while (n--) {
// 		cin >> d;
// 		input_At_Head(head, d);
// 	}
// 	return head;

// }
// void print(node*head)
// {
// 	while (head != NULL)
// 	{
// 		cout << head->data << " ";
// 		head = head->next;
// 	}
// 	cout << endl;
// }
// node* reverse(node* head)
// {
// 	if (head == NULL or head->next == NULL)
// 	{
// 		return head;
// 	}
// 	node* end = reverse(head->next);
// 	head->next->next = head;
// 	head->next = NULL;
// 	return end;
// }

// int main() {
// 	node*head = NULL;
// 	int n;
// 	cin >> n;
// 	head = take_Input(n);
// 	node*st = head;

// 	node*rev = reverse(st);
// 	print(rev);
// 	print(head);
// 	return 0;
// }
int main()
{
	list<int> s;
	int n, data;
	cin >> n;
	for (int i = 0; i < n; i++)
	{	cin >> data;
		s.push_front(data);

	}
	while (!s.empty())
	{
		if (s.front() != s.back())
		{
			cout << "false " << endl;
			return 0;
		}
		s.pop_front();
		s.pop_back();
	}
	cout << "true" << endl;
	return 0;
	// for (int a : s)
	// {
	// 	cout << a << " ";
	// }



}