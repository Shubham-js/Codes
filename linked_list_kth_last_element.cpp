#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int data) {
		this->data = data;
		next = NULL;

	}


};
node* insert_At_Head(node*&head, int data)
{
	if (head == NULL)
	{
		head = new node(data);
	}
	else
	{
		node *temp = new node(data);
		temp->next = head;
		head = temp;
	}
	return head;
}
node* take_input(node*&head)
{

	int a;
	cin >> a;
	while (a != -1)
	{
		insert_At_Head(head, a);
		cin >> a;
	}
	return head;
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
int main() {
	node*head = NULL;
	head = take_input(head);
	int n;
	cin >> n;
	while (n > 1)
	{
		head = head->next;
		n--;
	}
	cout << head->data;

	//print(head);


}