#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        if (n >= 0 and n <= 9)
        {
            return n;
        }
        vector<int>v;

        while (n > 0)
        {
            int r = n % 10;

            n /= 10;
            v.push_back(r);
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
        int idx = -1;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                v[i + 1] -= 1;
                idx = i;

            }
        }

        int ans = 0;
        for (int i = v.size() - 1; i > idx; i--)
        {
            ans = ans * 10 + v[i];
        }

        for (int i = idx; i >= 0; i--)
        {
            ans = ans * 10 + 9;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int n;

    cin >> n;
    cout << s.monotoneIncreasingDigits(n) << endl;
    return 0;
}