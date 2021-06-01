#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int c = 0; char ch = s.at(0);
	int i = 0;
	for ( i = 0; i < s.length(); i++)
	{
		if (s.at(i) == ch)
		{
			c++;
			continue;
		}


		cout << ch << c;
		c = 1;
		ch = s.at(i);


	}
	cout << s.at(i - 1) << c << endl;
}