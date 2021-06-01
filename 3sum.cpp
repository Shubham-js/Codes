#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	//Method 1
	// vector<vector<int>> threeSumMulti(vector<int>&v) {
	// 	if (v.size() < 3)
	// 	{
	// 		return {};
	// 	}
	// 	sort(v.begin(), v.end());
	// 	set<vector<int>>t;
	// 	for (int i = 0; i < v.size(); i++)
	// 	{
	// 		int sum = -1 * v[i];
	// 		int x = i + 1, y = v.size() - 1;
	// 		while (x < y)
	// 		{
	// 			if (v[x] + v[y] == sum and x != i and y != i)
	// 			{
	// 				t.insert({v[i], v[x], v[y]});
	// 				y--;

	// 			}
	// 			else if (v[x] + v[y] > sum)
	// 			{
	// 				y--;
	// 			}
	// 			else
	// 			{
	// 				x++;
	// 			}


	// 		}

	// 	}
	// 	return {t.begin(), t.end()};

	// }
	//Method 2
	vector<vector<int>> threeSum(vector<int>& nums)
	{
		vector<vector<int>> res;
		int n = nums.size();
		sort(nums.begin(), nums.end());

		if (n < 3)
			return res;
		//The approach followed here is:
		//Let's say there are three numbers x,y,z whose sum should be equal to zero. i.e x+y+z=0,
		//Now y+x=(-x); So, it now becomes a two sum problem. After picking (-x) from i to n-2,            we will find two numbers, y and z from i+1 to n-1, such that their sum equals (-x).
		for (int i = 0; i < n - 2; i++)
		{
			if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
			{
				int low = i + 1, high = n - 1;
				while (low < high)
				{
					int sum = nums[i] + nums[low] + nums[high];
					if (sum == 0)
					{
						res.push_back({nums[i], nums[low], nums[high]});
						//To avoid duplicacy..
						while (low < high && nums[low] == nums[low + 1])low++;
						while (low < high && nums[high] == nums[high - 1])high--;
						low++; high--;
					}
					if (sum > 0)high--;
					if (sum < 0)low++;
				}
			}
		}
		return res;
	}
};
int main()
{
	Solution s;
	vector<int>v = { -1, 0, 1, 2, -1, -4};
	vector<vector<int>>x = s.threeSum(v);

	for (auto t : x)
	{
		cout << t[0] << " " << t[1] << " " << t[2] << endl;
	}
	return 0;

}