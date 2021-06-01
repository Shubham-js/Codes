class Solution {
public:
	int dp[10005][105];
	int sqr[10005];

	int cal(int sum, int idx) {
		if (sum == 0)return 0;
		if (idx <= 0 || sum < 0)return 10008;

		if (dp[sum][idx] != -1)return dp[sum][idx];

		if (sqr[idx] > sum)return dp[sum][idx] = cal(sum, idx - 1);
		return dp[sum][idx] = min(1 + cal(sum - sqr[idx], idx), cal(sum, idx - 1));
	}

	int numSquares(int n) {
		for (int i = 1; i <= 10000; i++)sqr[i] = i * i;
		memset(dp, -1, sizeof(dp));
		return cal(n, sqrt(n) + 1);
	}
};