#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	stack<char>st;
	bool isValid(string s) {
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				st.push(s[i]);
			}
			else if (st.empty() and !(s[i] == '(' || s[i] == '{' || s[i] == '['))
			{
				st.push(s[i]);
				break;

			}
			else if (st.top() == '(' && s[i] == ')')
			{
				st.pop();
			}
			else if (st.top() == '{' && s[i] == '}')
			{
				st.pop();
			}
			else if (st.top() == '[' && s[i] == ']')
			{
				st.pop();
			}
			else {

				return false;
			}
		}
		if (st.size() == 0)
		{
			return true;
		}
		return false;

	}
};
int main() {
	string s;
	cin >> s;
	Solution ss;
	cout << ss.isValid(s) << endl;
	return 0;
}