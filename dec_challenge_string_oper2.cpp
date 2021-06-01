#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	set<string>result;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 1; j <= s.length() - i ; ++j)
		{
			string x = s.substr(i, j);
			string y = x;
			int c = 0;
			for (int k = i ; k < j; k++)
			{

				if (s.at(k) == '1')
				{
					c++;
				}

			}

		}