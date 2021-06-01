#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findKthPositive(vector<int>& v, int k) {
		vector<int>cf;
		int n = v.size();
		int y = 0;
		int gap = 0;
		for (int i = 0; i < n ; ++i)
		{
			int x = v[i] - y - 1;
			//cout << x << endl;

			for (int j = y + 1; j < v[i]; j++)
			{
				cf.push_back(j);

			}
			y = v[i];

			gap += x;
		}
		// for (int i = 0; i < cf.size(); ++i)
		// {
		// 	cout << cf[i] << endl;
		// }
		// cout << gap << endl;
		if (gap >= k)
		{
			return cf[k - 1];
		}
		else
		{
			return v[n - 1] + k - gap;
		}


	}
};
int main() {
	int n;
	cin >> n;
	vector<int>v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int k;
	cin >> k;
	Solution s;
	int ans = s.findKthPositive(v, k);
	cout << ans << endl;

}