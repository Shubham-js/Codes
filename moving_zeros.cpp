#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void moveZeroes(vector<int>& v) {
		int i = 0, j = 0;
		if (v.size() == 1)
		{
			return;
		}
		int n = v.size();
		while (j < n and i < n)
		{
			if (v[i] != 0 and i < n)
			{
				i++;
			}
			if (v[j] == 0 and j < n)
			{

				j++;
			}
			if (v[j] != 0 and v[i] == 0 and i < j and j < n)
			{
				swap(v[i], v[j]);
				i++;
				j++;
			}
		}

	}
};
int main() {
	vector<int>v1 = {0, 0, 1, 0};
	vector<int>v3 = {0, 0};
	vector<int>v4 = {0, 1, 0, 3, 12};
	vector<int>v2 = {1, 2, 3, 4};

	Solution s;
	s.moveZeroes(v2);
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	return 0;

}