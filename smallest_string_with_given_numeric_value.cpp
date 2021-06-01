#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string getSmallestString(int n, int k)
	{
		string str(n, 'a');
		k = k - n;
		int ri = n - 1;
		while (k > 0)
		{
			str[ri] = str[ri] + min(25, k);
			ri--;
			k = k - 25;
		}
		return str;
	}
};

int main() {
	int n, k;
	cin >> n >> k;
	Solution s;
	cout << s.getSmallestString(n, k) << endl;
	return 0;
}