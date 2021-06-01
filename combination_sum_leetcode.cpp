class Solution {
public:
    set<vector<int>>x;

    void combination(vector<int>&c, int t, int i, int sum, vector<int>v)
    {
        if (sum > t or i == c.size())
        {
            return;
        }
        if (sum == t)
        {
            x.insert(v);
            for (auto p : v)
            {
                cout << p << " ";
            }
            cout << endl;
            return;
        }
        if (sum == 0 and i == 0)
        {

            combination(c, t, i + 1, sum, v);
            v.push_back(c[i]);
            combination(c, t, i, sum + c[i], v);
            combination(c, t, i + 1, sum + c[i], v);

        }
        else
        {
            combination(c, t, i + 1, sum, v);
            v.push_back(c[i]);
            combination(c, t, i, sum + c[i], v);

            combination(c, t, i + 1, sum + c[i], v);
            return;

        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        combination(candidates, target, 0, 0, v);
        return {x.begin(), x.end()};
    }
};


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> combinations;
        vector<vector<int>> result;
        findTargetSum(candidates, result, combinations, target, 0, 0);
        return result;

    }

    void findTargetSum(vector<int> &candidates, vector<vector<int>> &result, vector<int> &combinations, int target, int start, int sum) {

        if (sum > target) return;

        else if (sum == target) {
            result.push_back(combinations);
        }
        else {
            for (int i = start; i < candidates.size(); i++) {
                combinations.push_back(candidates[i]);
                findTargetSum(candidates, result, combinations, target, i, sum + candidates[i]);
                combinations.pop_back();
            }
            return;
        }

    }
};