#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int scoreOfParentheses(string s) {
		stack<char>st;//stack to store the '('' bracket
		bool flag = true;
		//flag is used to denote the highest degree to be added in case ((())) the output would be 2^3
		//because flag will make sure thet it's a continues ))) pop if ( the flag = true and would be added

		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
			{
				flag = true;
				st.push(s[i]);
			}
			else
			{
				st.pop();
				if (flag)
				{
					sum = sum + 1 * pow(2, st.size());
					flag = false;
				}

			}
		}
		return sum;



	}
};
int main()
{
	string s = "(()(()))";
	Solution ss;
	cout << ss.scoreOfParentheses(s) << endl;
}