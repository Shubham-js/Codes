class Solution {
public:
    int maxResult(vector<int>& v, int k) {
        vector<int>dp(v.size(), INT_MIN);
        priority_queue<pair<int, int>>pq;
        dp[0] = v[0];
        pq.push({v[0], 0});
        for (int i = 1; i < v.size(); i++)
        {
            int a = max(0, i - k);
            if (!pq.empty() and pq.top().second >= a)
            {
                dp[i] = pq.top().first + v[i];
                pq.push({dp[i], i});
                continue;
            }
            else if (!pq.empty() and pq.top().second < a)
            {
                while (!pq.empty() and pq.top().second < a)
                {
                    pq.pop();
                }
                if (!pq.empty()) {
                    dp[i] = pq.top().first + v[i];
                    pq.push({dp[i], i});
                }
                continue;

            }

            for (int j = i - 1; j >= a; j--)
            {
                dp[i] = max(dp[i], dp[j] + v[i]);

            }

            pq.push({dp[i], i});
        }
        // for(auto x:dp)
        // {
        //     cout<<x<<" ";
        // }
        return dp[v.size() - 1];
    }
};