#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	int concatenatedBinary(int n) {
		long long int result = 0;
		int total_bits = 0;
		for (int i = 1; i <= n; i++)
		{
			total_bits =  (int)log2(i) + 1;
			cout << total_bits << endl;
			result = (result << total_bits) + i;
			if (result > INT_MAX)
				result = result % 1000000007;

		}
		return result % 1000000007;
	}
};
int main() {
	Solution s;
	int m = 1000000000 + 7;
	int n;
	cin >> n;
	cout << s.concatenatedBinary(n) %  m << endl;
	return 0;
}
