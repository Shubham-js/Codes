#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	string str;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cin >> str;
		//cout << ch << endl;
		stack<char>s;
		//char a = str[0];
		s.push(str[0]);
		cout << s.top() << endl;


		int c = 1;
		int i = 1;
		while (i < n)
		{
			if (s.top() != str[i])
			{
				s.pop();

			}
			else if (s.empty() or s.top() == str[i])
			{
				s.push(str[i]);

				//cout << ch[i] << endl;
			}

			i++;

		}
		cout << c << endl;

	}

	return 0;
}