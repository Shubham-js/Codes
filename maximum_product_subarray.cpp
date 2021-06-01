class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current_max = nums[0];
        int current_min = nums[0];
        int prev_max = nums[0];
        int prev_min = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            current_max = max(prev_max * nums[i], max(prev_min * nums[i], nums[i]));
            //cout<<prev_max*nums[i]<<endl;
            current_min = min(prev_max * nums[i], min(prev_min * nums[i], nums[i]));
            // cout<<current_max<<" "<<current_min<<endl;
            ans = max(current_max, ans);
            prev_max = current_max;
            prev_min = current_min;
            // cout<<prev_max<<"    "<<prev_min<<endl;
        }
        return ans;
    }
};