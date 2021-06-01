#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& v, int t) {
		vector<int>x;
		x.push_back(0);
		int temp = 0;
		for (int i = 0; i < v.size(); i++)
		{
			temp += v[i];
			x.push_back(temp);
		}
		int i = 0, j = x.size() - 1;
		while (i < j)
		{
			if (x[j] - x[i] == t)
			{
				return {i, j - 1};
			}
			else if (x[j] - x[i] > t)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
	}
};
int main() {
	vector<int>v = {3, 2, 4};
	int t = 6;
	Solution s;
	vector<int>x = s.twoSum(v, t);
	cout << x[0] << " " << x[1] << endl;
	return 0;
}