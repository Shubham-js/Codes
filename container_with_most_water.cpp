#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxArea(vector<int>&v) {
		int ans = 0;
		int i = 0, j = v.size() - 1;
		while (i < j)
		{
			int diff = j - i;

			ans = max(ans, diff * min(v[i], v[j]));
			if (v[i] < v[j])
			{
				i++;
			}
			else
			{
				j--;
			}
		}
		return ans;


	}
};
int main() {
	vector<int>v = {1, 1};
	Solution s;
	cout << s.maxArea(v) << endl;
	return 0;
}


