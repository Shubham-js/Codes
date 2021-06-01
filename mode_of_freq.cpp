#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, temp, max = INT_MIN, ans;
		cin >> n;
		map<int, int> num, freq;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			num[temp]++;
		}
		for (auto i : num) {
			freq[i.second]++;
		}
		for (auto i : freq) {
			if (max < i.second) {
				ans = i.first;
				max = i.second;
			}
		}

		cout << ans << endl;
	}
	return 0;
}