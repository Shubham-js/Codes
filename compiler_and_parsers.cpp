#include <iostream>
using namespace std;
#define ll long long


int main() {
	// your code goes here
	ll int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		ll int c0 = 0, c1 = 0, count = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '<')
			{
				c0++;
			}
			else if (s[i] == '>')
			{
				c1++;
			}
			if (c0 == c1)
			{
				count = i + 1;
			}
			if (c0 < c1)
			{
				break;
			}
		}
		cout << count << endl;
	}
	return 0;
}
