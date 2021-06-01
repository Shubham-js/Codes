#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
Node*runner (Node *&head, int x)
{
    while (x--)
    {
        head = head->next;
    }
    return head;

}
// This function gets two arguments - the head pointers of the two linked lists
// Return the node which is the intersection point of these linked lists
// It is assured that the two lists intersect
Node *intersectionOfTwoLinkedLists(Node *head1, Node *head2)
{
    Node *a = head1;
    Node *b = head2;
    int c = 0, d = 0;
    while (a != NULL)
    {
        a = a->next;
        c++;
    }
    while (b != NULL)
    {
        b = b->next;
        d++;
    }
    a = head1;
    b = head2;
    if (c > d)
    {
        a = runner(head1, c - d);
    }
    else if (c < d)
    {
        b = runner(head2, d - c);
    }

    while (a != b)
    {
        a = a->next;
        b = b->next;


    }
    return a;

}



/*
*
*
*   You do not need to refer or modify any code below this.
*   Only modify the above function definition.
*   Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
*   You do not even need to read or know about the code below.
*
*
*
*/

Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);

    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;

    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }

    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);

    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;

    return 0;
}