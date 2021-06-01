#include <bits/stdc++.h>
using namespace std;
class compare
{
public:
	bool operator()(pair<int, int>a, pair<int, int>b)
	{
		if (a.first == b.first)
		{
			return a.second < b.second;
		}
		return a.first < b.first;
	}
};
class Solution
{
public:

	int maxArr(vector<int> &v)
	{
		vector<int>x, y;
		for (int i = 0; i < v.size(); i++)
		{
			x.push_back(v[i] + i);
			y.push_back(v[i] - i);
		}
		int m1 = INT_MAX, m2 = INT_MAX, n1 = INT_MIN, n2 = INT_MIN;
		for (int i = 0; i < x.size(); i++)
		{
			m1 = min(m1, x[i]);
			m2 = min(m2, y[i]);
			n1 = max(n1, x[i]);
			n2 = max(n2, y[i]);
		}
		//cout << m1 << " " << m2 << " " << n1 << " " << n2 << endl;
		return max(n1 - m1, n2 - m2);

	}

};
using namespace std;
int main() {
	vector<int>v = {1, 3, -1};
	vector<int>x = { 86, 19, 46, 56, 14, 67, 19, 53, 15, 59};
	vector<int>y = { -64, -79, -25, 53, 90, 58, 16, 23, 89, -75};
	Solution s;
	cout << s.maxArr(v) << endl;
	return 0;

}