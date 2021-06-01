#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void ascii_sequence(string ch, string op, int i)
{
	if (i == ch.length())
	{
		v.push_back(op);
		return;
	}
	ascii_sequence(ch, op, i + 1);
	ascii_sequence(ch, ch[i] + op, i + 1);

	int a = ch[i];

	ascii_sequence(ch, to_string(a) + op  , i + 1);

}
int main()
{
	string s;
	cin >> s;

	int l = s.length();
	ascii_sequence(s, "", 0);
	cout << "" << " ";
	for (auto x : v)
	{
		cout << x << " ";
	}
	return 0;
}