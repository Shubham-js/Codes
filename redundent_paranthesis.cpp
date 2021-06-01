#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		char ch[105];
		stack<char>s;
		cin >> ch; bool flag = true; int c = 0;
		for (int i = 0; i < strlen(ch); ++i)
		{

			if (ch[i] != ')')
			{
				s.push(ch[i]);
			}
			else
			{
				if (s.top() == '(')
				{	flag = false;
					cout << "Duplicate" << endl;
					break;
				}
				else {
					while (s.top() != '(')
					{
						s.pop();
					}
					s.pop();
				}
			}
		}
		if (flag)
			cout << "Not Duplicate" << endl;

	}
}