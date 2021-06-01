#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int i;
	for ( i = 0; i < s.length() - 1; i++)
	{
		cout << s[i] << s[i + 1] - s[i];
	}
	cout << s[i] << endl;
	return 0;
}