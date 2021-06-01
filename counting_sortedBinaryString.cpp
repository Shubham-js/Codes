#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

	int countVowelStrings(int n) {
		if (n == 0)
		{
			return 0;
		}
		if (n == 1)
		{
			return 5;
		}
		int sum = 0;
		int s = 5;
		for (int i = 1; i <= s; i++)
		{
			sum += n * i;
		}
		return sum / 2;

	}
};
int main()
{
	int n;
	cin >> n;
	Solution s;
	cout << s.countVowelStrings(n);
	return 0;
}