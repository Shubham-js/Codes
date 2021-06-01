#include<bits/stdc++.h>
using namespace std;
int ansstring_to_integer(char *c, int i, int ans)
{
	//base case
	if (c[i] == '\0')
	{
		return ans;
	}
	int x = c[i] - '0';
	ans = ans * 10 + x;
	return ansstring_to_integer(c, i + 1, ans);

}
int main() {
	string n;
	getline(cin, n);
	char c[n.size() + 1];
	strcpy(c, n.c_str());

	int ans = ansstring_to_integer(c, 0, 0);
	cout << ans << endl;

}