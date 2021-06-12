class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>v;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums.size() - 1; j >= i; j--)
            {
                int k = i + 1, l = j - 1;
                while (k < l)
                {
                    // cout<<nums[i]<<" "<<nums[k]<<" "<<nums[l]<<" "<<nums[j]<<endl;
                    int sum = nums[i] + nums[k] + nums[l] + nums[j];
                    if (sum == target)
                    {
                        v.insert({nums[i], nums[k], nums[l], nums[j]});
                    }
                    if (sum < target)
                    {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        return {v.begin(), v.end()};
    }
};