#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        set<int>s;
        for (int i = 0; i < v.size(); i++)
        {
            s.insert(v[i]);
        }
        if (s.empty()) return 0;
        int c = 1, ans = 0;
        int prev = INT_MIN;

        for (auto it : s)
        {

            if (prev == INT_MIN)
            {
                prev = it;

                continue;
            }
            else if (it - prev == 1)
            {

                c++;

                prev = it;
            }
            else
            {
                prev = it;
                ans = max(c, ans);
                c = 1;
            }

        }
        ans = max(c, ans);
        return ans;
    }
};
int main() {
    vector<int>v = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    Solution s;
    cout << s.longestConsecutive(v) << endl;
    return 0;
}