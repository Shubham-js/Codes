#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, f;
		cin >> n >> f;

		string s;
		cin >> s;
		int a = 0, b = 0, ans = 0;
		for (int i = 0; i < n; i++)
		{
			char c = s.at(i);
			if (c == '1')
				a++;
			else
				b++;
		}
		if (a % 2 != 0 || b % 2 != 0)
		{
			cout << "IMPOSSIBLE" << endl;
		}
		else {
			while (a != 1 || b != 1) {
				a = a / 2;
				b = b / 2;
				ans++;

			}
			cout << ans << endl;
		}
	}
}