

//this is bottom up

class Solution {
public:
    int longestCommonSubsequence(string x, string y) {
        int m = x.length();
        int n = y.length();
        int dp[m + 1][n + 1];
        for (int i = 0; i < m + 1; i++)
        {
            for (int j = 0; j < n + 1; j++)
            {
                if (i == 0 or j == 0)
                    dp[i][j] = 0;
            }
        }


        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[m][n];

    }
};












//this is top down with memoization
// class Solution {
// public:
//     int dp[1001][1001];



//     int LCS(string s1, int i, string s2, int j)
//     {


//         if (i < 0 or j < 0)
//         {
//             return 0;
//         }
//         if (dp[i][j] != -1)
//         {
//             return dp[i][j];
//         }

//         if (s1[i] == s2[j])
//         {
//             //cout<<s1[i]<<" "<<s2[j]<<endl;
//             dp[i][j] = 1 + LCS(s1, i - 1, s2, j - 1);
//             return dp[i][j];
//         }
//         dp[i][j] = max(LCS(s1, i - 1, s2, j), LCS(s1, i, s2, j - 1));
//         return dp[i][j];
//     }




//     int longestCommonSubsequence(string text1, string text2) {
//         int i = text1.length() - 1;
//         int j = text2.length() - 1;
//         for (int x = 0; x <= i; x++)
//         {
//             for (int y = 0; y <= j; y++)
//             {
//                 dp[x][y] = -1;
//             }
//         }
//         return LCS(text1, i, text2, j);
//     }

// };


//this is praful bhaiya's extra mehenat to cut corner cases
// // class Solution {
// // public:
// //     int dp[1001][1001];
// //     int actual_call = 0;
// //     int total_call = 0;

// //     int LCS(string s1, int i, string s2, int j)
// //     {
// //         total_call++;


// //         if (i < 0 or j < 0)
// //         {
// //             return 0;
// //         }
// //         else if (i == 0)
// //         {
// //             while (j >= 0)
// //             {
// //                 if (s2[j--] == s1[0])
// //                     return 1;
// //             }
// //             return 0;
// //         }
// //         else if (j == 0)
// //         {
// //             while (i >= 0)
// //             {
// //                 if (s1[i--] == s2[0])
// //                     return 1;
// //             }
// //             return  0;
// //         }
// //         else if (dp[i][j] == -1)
// //         {
// //             actual_call++;
// //             if (s1[i] == s2[j])
// //             {
// //                 dp[i][j] = 1 + LCS(s1, i - 1, s2, j - 1);
// //             }
// //             else
// //             {
// //                 dp[i][j] = max(LCS(s1, i - 1, s2, j), LCS(s1, i, s2, j - 1));
// //             }
// //         }
// //         return dp[i][j];
// //     }

// //     int longestCommonSubsequence(string text1, string text2) {
// //         int i = text1.length() - 1;
// //         int j = text2.length() - 1;
// //         for (int x = 0; x <= i; x++)
// //         {
// //             for (int y = 0; y <= j; y++)
// //             {
// //                 dp[x][y] = -1;
// //             }
// //         }

// //         int value =  LCS(text1, i, text2, j);
// //         cout << total_call << " " << actual_call;
// //         return value;
// //     }

// // };