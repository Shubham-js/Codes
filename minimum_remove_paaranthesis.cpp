#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	// string minRemoveToMakeValid(string s) {
	// 	stack<pair<char, int>>st;
	// 	int i = 0;
	// 	int n = s.length();
	// 	while (i < n)
	// 	{
	// 		if (st.empty() or s[i] == '(')
	// 		{
	// 			st.push({s[i], i});
	// 		}
	// 		else if (s[i] == ')' and st.top().first == '(')
	// 		{
	// 			st.pop();
	// 		}
	// 		else if (s[i] == ')')
	// 		{
	// 			st.push({s[i], i});
	// 		}
	// 		i++;
	// 	}
	// 	while (!st.empty())
	// 	{

	// 		int x = st.top().second;

	// 		if (s[x] == '(' or s[x] == ')')
	// 			s.erase(s.begin() + x);
	// 		st.pop();
	// 	}
	// 	return s;

	// }
	string minRemoveToMakeValid(string s)
	{
		for (int i = 0; i < n; i++)
		}
};
int main() {
	string s = "(a(b(c)d)";
	Solution ss;
	cout << ss.minRemoveToMakeValid(s) << endl;
	return 0;
}