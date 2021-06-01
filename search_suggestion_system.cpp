#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	char data;
	map<char, Node*>children;
	bool terminal;
	Node(char data)
	{
		this->data = data;
		terminal = false;
	}
};
class Trie {
public:
	Node*root;
	Trie()
	{
		root = new Node('\0');
	}
	void insert(string s)
	{
		Node*temp = root;
		for (int i = 0; i < s.length(); i++)
		{
			char ch = s[i];
			if (temp->children[ch])
			{
				temp = temp->children[ch];
			}
			else
			{
				Node* x = new Node(ch);
				temp->children[ch] = x;
				temp = x;
			}
		}
		temp->terminal = true;
	}
	vector<string> searchProduct(string s)
	{
		vector<string>ans;
		bool available = true;
		Node*temp = root;
		for (int i = 0; i < s.length(); i++)
		{	char ch = s[i];
			if (temp->children.count(ch))
			{
				available = false;
				break;

			}
			else
			{
				temp = temp->children[ch];
			}
		}
		int c = 0;
		string p = s;
		for (auto a = temp->children[ch])
		{
			p += a.first;
			cout << p << endl;

		}
		return ans;
	}
};
class Solution {
public:
	vector<vector<string>> suggestedProducts(vector<string>& p, string search) {
		Trie t();
		for (auto a : p)
		{
			t.insert(a);
		}
		string f = "";
		for (int i = 0; i < search.length(); i++)
		{
			f += search[i];
			t.searchProduct(f);
		}
		return {};
	}
};
int main()
{
	vector<string>p = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
	string search = "mobile";
	Solution s;
	vector<vector<string>>v = s.suggestedProducts(p, search);
	for (auto x : v)
	{
		for (auto y : x)
		{
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}