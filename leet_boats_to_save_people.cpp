#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numRescueBoats(vector<int>& v, int l) {
		sort(v.begin(), v.end());
		//there can be only 2 people at max in a boat;
		//so if the pair of  litest and heaviest cant be maade then the heaviest has to go alone;
		int i = 0, j = v.size() - 1;
		int c = 0;
		while (i <= j)
		{
			int sum = v[i] + v[j];

			if (sum <= l)
			{
				i++;
				j--;

			}
			else
			{
				j--;


			}
			c++;

		}
		return c;
	}
};
int main()
{
	Solution s;
	int l, n, temp;
	vector<int>v;
	cin >> n >> l;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int ans = s.numRescueBoats(v, l);
	cout << ans << endl;
	return 0;
}
