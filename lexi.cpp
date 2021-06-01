#include<bits/stdc++.h>
using namespace std;
bool comparator(string a, string b)
{
	int min_len = min(a.length(), b.length());
	if (a.substr(0, min_len) == b.substr(0, min_len)) {
		return a.length() > b.length();
	} else {
		return a < b;
	}
}

int main() {

	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n, comparator);
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}