#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> mostCompetitive(vector<int>& nums, int k) {
		deque<int> queue;
		int additionalCount = nums.size() - k;
		for (int i = 0; i < nums.size(); i++) {
			while (!queue.empty() && queue.back() > nums[i] && additionalCount-- > 0)
			{
				queue.pop_back();
			}
			queue.push_back(nums[i]);
		}
		return {queue.begin(), queue.begin() + k};

	}
};
int main() {
	vector<int>v = { 84, 10, 71, 23, 66, 61, 62, 64, 34, 41, 80, 25, 91, 43, 4, 75, 65, 13, 37, 41, 46, 90, 55, 8, 85, 61, 95, 71};
	int k = 24;
	Solution s;
	vector<int>x = s.mostCompetitive(v, k);
	for (auto y : x)
	{
		cout << y << " ";
	}
	return 0;

}


// vector<int>x;
// 	stack<int>st;
// 	st.push(v[0]);
// 	int n = v.size();
// 	for (int i = 1; i < n; i++)
// 	{

// 		if (n - i > k - st.size())
// 		{
// 			while (st.size() != 0 and st.top() > v[i] )
// 			{
// 				st.pop();
// 			}
// 			if (st.size() < k)
// 				st.push(v[i]);

// 		}
// 		else if (st.size() < k)
// 		{
// 			st.push(v[i]);
// 		}


// 	}
// 	while (st.size() > 0)
// 	{
// 		x.push_back(st.top());
// 		st.pop();
// 	}
// 	reverse(x.begin(), x.end());
// 	return x;
// }
