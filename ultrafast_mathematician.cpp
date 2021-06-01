#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string m, n;
		cin >> m >> n;
		int x;
		string s;
		for (int i = 0; i < m.length(); i++)
		{
			x = n.at(i)^m.at(i);
			s += to_string(x);

		}
		cout << s << endl;


	}
}
