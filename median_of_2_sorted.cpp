#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
		int m = v1.size();
		int n = v2.size();
		vector<int>v;
		int i = 0, j = 0;
		while (i < v1.size() and j < v2.size())
		{
			if (v1[i] <= v2[j])
			{

				v.push_back(v1[i]);
				i++;
			}
			else
			{
				v.push_back(v2[j]);
				j++;
			}
		}
		while (i < v1.size())
		{
			v.push_back(v1[i]);
			i++;
		}
		while (j < v2.size())
		{
			v.push_back(v2[j]);
			j++;
		}
		int a = (m + n);


		if (a % 2 == 0 and a > 0)
		{
			a = a / 2;
			return 1.00000 * ((double)(v[a] + v[a - 1]) / (double) 2);


		}
		else
		{	a = a / 2;
			return 1.00000 * v[a];
		}



	}
};
int main() {
	Solution s;
	vector<int>v1 = {};
	vector<int>v2 = {2};

	cout << s.findMedianSortedArrays(v1, v2) << endl;
	return 0;

}