class Solution {
public:
    int dp[100][100] = {0};
    int ans(int i, int j, int m , int n)
    {
        if (i > m or j > n)
        {
            return 0;
        }
        if (i == m and j == n)
        {
            dp[i][j] += 1;
            return 1;
        }
        if (dp[i][j] != 0)
        {
            return dp[i][j];
        }
        int x = 0, y = 0;
        if (i < m)
        {
            x = ans(i + 1, j, m, n);
        }
        if (j < n)
        {
            y = ans(i, j + 1, m, n);
        }

        dp[i][j] = x + y;
        return dp[i][j];

    }
    int uniquePaths(int m, int n) {

        return ans(0, 0, m - 1, n - 1);

    }
};