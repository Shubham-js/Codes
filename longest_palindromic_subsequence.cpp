// class Solution {
// public:
//     int dp[1001][1001];
//     int longest(string s, int i, string x, int j)
//     {
//         if (i == s.length() or j == x.length())
//         {
//             return 0;
//         }
//         if (s[i] == x[j])
//         {
//             return dp[i][j] = longest(s, i + 1, x, j + 1) + 1;
//         }
//         int a = 0, b = 0;
//         if (dp[i][j] != 0)
//         {
//             return dp[i][j];
//         } else
//         {

//             a = longest(s, i + 1, x, j);
//             b = longest(s, i, x, j + 1);
//         }
//         return dp[i][j] = max(a, b);
//     }
//     int longestPalindromeSubseq(string s) {
//         string x = s;
//         reverse(s.begin(), s.end());
//         memset(dp, 0, sizeof(dp));
//         return longest(x, 0, s, 0);
//     }
// };
// //Goes TLE for Few Cases.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        int dp[n][n] = {0};
        //every single letter is a palindrome
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }
        for (int growth = 1; growth < n; growth++)
        {
            for (int i = 0, j = i + growth; j < n; i++, j++)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]) + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[0][n - 1];

    }
};
int main() {
    string st = "asdfddadas";
    Solution s;
    cout << s.longestPalindromeSubseq(st);
    return 0;

}
