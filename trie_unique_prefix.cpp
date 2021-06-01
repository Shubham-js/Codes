#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	unordered_map<char, node*>children;
	int f;
	bool terminal;
	node(int d)
	{
		data = d;
		terminal = false;
		f = 1;
	}
};
class trie {
	node*root;
	int cnt;
public:
	trie()
	{
		root = new node('\0');
		cnt = 0;
	}

	void insert(char*w)
	{	node*temp = root;

		for (int i = 0; w[i] != '\0'; i++)
		{
			char ch = w[i];
			if (temp->children[ch])
			{
				temp = temp->children[ch];
				temp->f += 1;
			}
			else
			{
				node* n = new node(ch);
				temp->children[ch] = n;
				temp = n;
			}
		}
	}


	void prefix_search(char*w)
	{
		char x[100];
		node*temp = root;
		int p = 0;
		for (int i = 0; w[i] != '\0' ; ++i)
		{
			char ch = w[i];

			if (temp->children.count(ch) == 0)
			{
				cout << "-1" << endl;
				return;
			}

			if (temp->children[ch]->f == 1)
			{
				x[p] = ch;
				p++;
				x[p] = '\0';

				cout << x << endl;
				return;
			}
			else if (temp->children[ch]->f > 1)
			{
				x[p] = ch;

				temp = temp->children[ch];
				p++;
			}
		}
		cout << "-1" << endl;
	}


};
int main() {
	int n;
	trie t;
	cin >> n;
	char ch[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> ch;
		t.insert(ch);
	}
	char s[] = "duck";
	t.prefix_search(s);




}