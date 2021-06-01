#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findKthLargest(vector<int>& v, int k) {
		priority_queue<int>pq;

		for (int i = 0; i < v.size(); ++i)
		{
			pq.push(v[i]);
		}
		k--;
		while (k--)
		{
			pq.pop();

		}
		return pq.top();
	}
};
int main() {
	int n, k, temp;
	cin >> n >> k;
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}
	Solution s;
	cout << s.findKthLargest(v, k) << endl;


}