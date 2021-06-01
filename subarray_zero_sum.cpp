#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int pre = 0; bool present = false;
	unordered_map<int, bool>m;
	for (int i = 0; i < n; ++i)
	{
		pre += a[i];
		if (m[pre] or pre == 0)
		{
			cout << "Yes we hava a zero sum prefix array";
			present = true;
			break;
		}
		m[pre] = true;
	}
	if (!present)
		cout << "No we don't have sum prefix array";
	return 0;
}