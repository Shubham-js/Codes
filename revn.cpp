#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		reverse(str.begin(), str.end());
		int i = 0;
		while (str[i] == '0')
			i++;

		str.erase(0, i);
		cout << str << endl;
	}
}