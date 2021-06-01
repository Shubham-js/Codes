#include<bits/stdc++.h>
using namespace std;
string  character_formatting(char *c, int i, string s )
{
	if (c[i] == '\0')
	{
		return	s;
	}
	if (c[i] == c[i + 1])
	{

		return character_formatting(c, i + 1, s + c[i] + '*');
	}
	return character_formatting(c, i + 1, s + c[i]);



}




int main() {
	char c [100];
	cin >> c;
	string s;
	cout << character_formatting(c, 0, s ) << endl;

	return 0;
}
