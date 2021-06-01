class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&v) {
        sort(v.begin(), v.end());
        vector<int>merger(v.size(), 2);
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1][0] <= v[i][0] or (v[i][1] >= v[i + 1][0] and v[i][1] <= v[i + 1][1]) or (v[i + 1][0] >= v[i][0] and v[i + 1][1] <= v[i][1]))
            {
                v[i + 1][0] = min(v[i][0], v[i + 1][0]);
                v[i + 1][1] = max(v[i][1], v[i + 1][1]);
                merger[i + 1] = 1;
                merger[i] = 0;
            }
        }
        vector<vector<int>>ans;
        for (int i = 0; i < merger.size(); i++)
        {
            if (merger[i] != 0)
            {
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};