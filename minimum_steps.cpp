#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int>a = {4, 8, -7, -5, -13, 9, -7, 8 };
	vector<int>b = { 4, -15, -10, -3, -13, 12, 8, -8};

	int ans = 0;
	for (int i = 0; i < a.size() - 1; i++)
	{
		int x = abs(a[i] - a[i + 1]);
		int y = abs(b[i] - b[i + 1]);
		ans += min(x, y) + max(x - y, y - x);


	}
	cout << ans << endl;
}