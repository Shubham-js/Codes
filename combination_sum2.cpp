class Solution {
public:
    set<vector<int>>s;
    void combination(vector<int>&c, int t, int i, int sum, vector<int>v)
    {
        if (sum == t)
        {
            //cout<<sum<<endl;
            s.insert(v);
            return;
        }
        if (sum > t or i == c.size())
        {
            return;
        }
        if (c[i] > t)
        {
            combination(c, t, i + 1, sum, v);
        }
        else if (sum + c[i] > t) {
            combination(c, t, i + 1, sum, v);

        }
        else
        {
            combination(c, t, i + 1, sum, v);
            v.push_back(c[i]);
            combination(c, t, i + 1, sum + c[i], v);
        }
        return;
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(), c.end());
        vector<int>v;
        combination(c, t, 0, 0, v);
        return {s.begin(), s.end()};
    }
};
class Solution {
public:
    set<vector<int>>s;
    void combination(vector<int>&c, int t, int i, int sum, vector<int>v)
    {
        if (sum == t)
        {
            //cout<<sum<<endl;
            s.insert(v);
            return;
        }
        if (sum > t)
        {
            return;
        }
        for (int j = i; j < c.size(); j++)
        {
            v.push_back(c[j]);
            combination(c, t, j + 1, sum + c[j], v);
            v.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        int a = 0;
        for (auto x : c)
        {
            a += x;
        }
        if (a < t)
        {
            return {};
        }
        sort(c.begin(), c.end());
        vector<int>v;
        combination(c, t, 0, 0, v);
        return {s.begin(), s.end()};
    }
};