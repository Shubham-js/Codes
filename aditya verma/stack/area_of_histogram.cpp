#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	int largestRectangleArea(vector<int>& h) {
		stack<int> st; h.push_back(0); int ans = 0;
		for (int i = 0; i < h.size(); ++i) {
			while (st.size() > 0 && h[st.top()] >= h[i]) {
				int height = h[st.top()]; st.pop();
				int width = st.size() > 0 ? i - 1 - st.top() : i;
				ans = max(ans, height * width);
			}
			st.push(i);
		}
		return ans;

	}
};
class Solution {
public:
	int largestRectangleArea(vector<int>& v) {
		//calculate smallest to left
		vector<int>left, right;
		stack<int>st;
		for (int i = 0; i < v.size(); i++)
		{
			if (st.empty())
			{
				left.push_back(-1);
			}
			else if (!st.empty() and v[st.top()] < v[i])
			{
				left.push_back(st.top());
			}
			else if (!st.empty() and v[st.top()] >= v[i])
			{
				while (!st.empty() and v[st.top()] >= v[i])
				{
					st.pop();
				}
				if (st.empty())
				{
					left.push_back(-1);
				}
				else
				{
					left.push_back(st.top());
				}
			}
			st.push(i);
		}
		while (!st.empty())
		{
			st.pop();
		}
		int n = v.size();
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (st.empty())
			{
				right.push_back(n);
			}
			else if (!st.empty() and v[st.top()] < v[i])
			{
				right.push_back(st.top());
			}
			else if (!st.empty() and v[st.top()] >= v[i])
			{
				while (!st.empty() and v[st.top()] >= v[i])
				{
					st.pop();
				}
				if (st.empty())
				{
					right.push_back(n);
				}
				else
				{
					right.push_back(st.top());
				}
			}
			st.push(i);
		}
		int p = 0;
		vector<int>width(n, 0);
		for (int i = v.size() - 1; i >= 0; i--, p++)
		{
			width[p] = right[i] - left[p] - 1;
			//cout << width[p] << endl;

		}
		int ans = 0;
		for (int i = 0; i < v.size(); i++)
		{
			ans = max(ans, width[i] * v[i]);
		}
		return ans;
	}
};
int main() {
	int n;
	cin >> n;
	vector<int>v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	Solution s;
	cout << s.largestRectangleArea(v) << endl;
	return 0;
}
