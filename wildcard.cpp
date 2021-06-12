class Solution {
public:
    bool isMatch(string s, string p) {


        vector<vector<int>>dp(p.length() + 1, vector<int>(s.length() + 1));
        for (int i = dp.size() - 1; i >= 0; i--)
        {
            for (int j = dp[i].size() - 1; j >= 0; j--)
            {
                if (i == dp.size() - 1 and j == dp[0].size() - 1)
                {
                    dp[i][j] = true;
                }
                else if (i == dp.size() - 1)
                {
                    dp[i][j] = false;
                }
                else if (j == dp[0].size() - 1)
                {
                    if (p[i] == '*')
                    {
                        dp[i][j] = dp[i + 1][j];
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
                else
                {
                    if (p[i] == '?')
                    {
                        dp[i][j] = dp[i + 1][j + 1];
                    }
                    else if (p[i] == '*')
                    {
                        dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
                    }
                    else if (p[i] == s[j])
                    {
                        dp[i][j] = dp[i + 1][j + 1];
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
            }
        }
        return dp[0][0];
    }

};