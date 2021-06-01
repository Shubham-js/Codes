#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

	int longestValidParentheses(string s) {
		stack<int>st;//stack to push the index numbers;
		st.push(-1); int length = 0;
		//intitally -1 needs to be pushed as we will have to calculate the length;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
			{
				st.push(i);
			}
			else if (s[i] == ')')
			{

				st.pop();
				if (st.empty())
				{
					st.push(i);
				}
				else
				{
					length = max(length, i - st.top());
				}
			}
		}
		return length;

	}
};
int main() {
	string s = ")()())";
	Solution ss;
	cout << ss.longestValidParentheses(s) << endl;
	return 0;
}