#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	bool canEatAll(int k, int h, vector<int>v)
	{
		int i = 0;
		int n = v.size();
		int c = 0;

		while (i < n)
		{
			if (v[i] <= k)
			{
				c++;
			}
			else
			{
				c = c + (v[i] / k);

				c++;


			}
			i++;

		}
		if (c > h)
		{
			return false;
		}
		else
		{
			return true;
		}



	}




	int minEatingSpeed(vector<int>&v, int h) {
		int n = v.size();
		sort(v.begin(), v.end());
		int s = 1;
		int e = v[n - 1];
		int ans = INT_MAX;
		while ( s <= e)
		{
			int mid = ((e - s) / 2) + s;
			//cout << mid << endl;

			if (canEatAll(mid, h, v))
			{
				//cout << mid << endl;
				ans = min(mid, ans);
				e = mid - 1 ;

			}
			else
			{
				s = mid + 1;
			}
			//cout << s << " " << e << endl;
		}

		return ans;
	}
};
int main()
{
	Solution s;
	vector <int> v = {4, 11, 20, 23, 30};
	int h = 5;
	int ans = s.minEatingSpeed(v, h);
	cout << ans << endl;
	return 0;
}