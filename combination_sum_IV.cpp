//Gives TLE
class Solution {
public:
    vector<vector<int>>v;
    void combination(vector<int>&n, int t, int i, int sum, vector<int>k)
    {
        if (sum == t)
        {
            v.push_back(k);
        }
        if (sum > t or i == n.size())
        {
            return ;
        }

        for (int j = 0; j < n.size(); j++)
        {
            if (sum + n[j] <= t) {
                k.push_back(n[j]);
                combination(n, t, j, sum + n[j], k);
                k.pop_back();
            }
        }
        return;

    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>k;
        combination(nums, target, 0, 0, k);

        return v.size();
    }
};

//100% faster
class Solution {
public:
    int dp[1005] = {0};
    int comb(vector<int>&v, int t, int i, int sum)
    {
        if (sum == t)
        {
            return 1;
        }
        if (sum > t or i == v.size())
        {
            return INT_MIN;
        }
        if (dp[sum] != -1)
        {
            return dp[sum];
        }
        int a = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (sum + v[j] <= t)
                a += max(comb(v, t, j, sum + v[j]), 0);
        }
        return dp[sum] = a;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        return comb(nums, target, 0, 0);
    }
};