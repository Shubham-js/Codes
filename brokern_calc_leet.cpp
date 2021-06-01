#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int brokenCalc(int x, int y) {
		if (y <= x)
		{
			return x - y;
		}
		if (y % 2 == 0)
		{
			return 1 + brokenCalc(x, y / 2);
		}
		else
		{
			return 1 + brokenCalc(x, y + 1);
		}

	}
};
int main() {
	int x, y;
	cin >> x >> y;
	Solution s;
	cout << s.brokenCalc(x, y) << endl;
	return 0;
}