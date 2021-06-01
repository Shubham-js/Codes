#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<string> v;
	char ch[100];
	cin >> ch;
	while (prev_permutation(ch, ch + strlen(ch)))
	{
		//cout << ch << endl;
		v.push_back(ch);
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i] << endl;
	}
}