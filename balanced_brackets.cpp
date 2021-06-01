#include<bits/stdc++.h>
using namespace std;
int main() {
	char ch[100000];
	cin >> ch;
	stack<char>s;
	bool flag = true;
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == '(')
		{
			s.push(ch[i]);
		}
		else if (s.size() == 0 and ch[i] == ')')
		{
			flag = false;
			break;
		}
		else
		{
			s.pop();
		}

	}
	if (flag)
	{
		if (s.size() == 0)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}

	}
	else
	{
		cout << "No";
	}
}