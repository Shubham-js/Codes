#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[105][105];
    int decoder(string s, int i, string str)
    {
        if (i == s.length())
        {
            if (str != "") {
                //cout << str << endl;
                return 1;
            }

            return 0;
        }
        if (s[i] == '0' and str == "" or (stoi(str + s[i]) > 26))
        {
            return 0;
        }
        if (dp[i][str.length()] != -1)
        {
            return dp[i][str.length()];
        }

        int x = 0, y = 0;
        if (stoi(str + s[i]) <= 26) {

            x = decoder(s, i + 1, str + s[i]);
        }
        y = decoder(s, i + 1, "");

        return dp[i][str.length()] = x + y;

    }
    int numDecodings(string s) {
        memset(dp, -1, sizeof(dp));
        return decoder(s, 0, "");
    }
};
int main()
{
    string s = "11106";
    Solution ss;
    cout << ss.numDecodings(s) << endl;
    return 0;
}