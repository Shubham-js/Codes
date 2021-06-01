#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
		if (pushed.size() == 0)return true;
		stack<int>st;
		st.push(pushed[0]);
		int j = 0, i = 1;
		while (!st.empty() and i < pushed.size())
		{
			if (popped[j] == st.top())
			{
				st.pop();
				if (st.empty() and i < pushed.size())
				{
					st.push(pushed[i]);
					i++;
				}
				j++;
			}
			else
			{
				st.push(pushed[i]);
				i++;
			}
		}
		while (!st.empty())
		{
			if (popped[j] == st.top())
			{
				st.pop();
				j++;
			}
			else
			{
				return false;
			}
		}
		if (st.empty())
		{
			return true;
		}
		return false;
	}
};
int main()
{
	Solution s;
	vector<int>pushed = {4, 0, 1, 2, 3};
	vector<int>popped = {4, 2, 3, 0, 1};
	cout << s.validateStackSequences(pushed, popped) << endl;
	return 0;
}