#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minimumDeviation(vector<int>& v) {
		set<int>s;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] % 2 != 0)
			{
				s.insert(v[i] * 2);
			}
			else
			{
				s.insert(v[i]);
			}
		}
		int x = *s.rbegin();
		int y =	*s.begin();
		int diff = x - y;
		while (x % 2 == 0)
		{
			s.erase(x);
			x = x / 2;
			s.insert(x);
			x = *s.rbegin();
			y = *s.begin();

			diff = min(diff, x - y);
		}
		return diff;
	}
};
int main() {
	vector<int>v = {2, 8, 6, 1, 6};
	vector<int>u = {3, 5};

	Solution s;
	cout << s.minimumDeviation(v) << endl;
	return 0;
}