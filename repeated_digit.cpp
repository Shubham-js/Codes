#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int A(int m, int n) {
		int ret = 1;
		for (int i = 0; i < n; i++) {
			ret *= m;
			m--;
		}
		return ret;
	}
	int numDupDigitsAtMostN(int N) {
		vector<int> arr;
		for (int i = N + 1; i > 0; i /= 10) {
			arr.insert(arr.begin(), i % 10);
		}
		int ret = 0;
		int n = arr.size();
		for (int i = 1; i < n; i++) {
			ret += 9 * A(9, i - 1);
		}
		set<int> visited;
		for (int i = 0; i < n; i++) {
			int digit = arr[i];
			for (int j = i == 0 ? 1 : 0; j < digit; j++) {
				if (visited.count(j))
					continue;
				ret += A(9 - i, n - i - 1);
			}
			if (visited.count(digit))
				break;
			visited.insert(digit);
		}
		return N - ret;
	}
};
main() {
	Solution ob;

	int n;
	cin >> n;
	cout << (ob.numDupDigitsAtMostN(n));
}