#include<bits/stdc++.h>
using namespace std;
class compare {
public:
  bool operator()(vector<int>x, vector<int>y)
  {
    int a = max(x[0], x[1]);
    int b = max(y[0], y[1]);
    if (a == b)
    {
      return (x[0] + x[1] - a) < (y[0] + y[1] - b);
    }
    return a < b;
  }
};
class Solution {
public:

  int maxEnvelopes(vector<vector<int>>& v) {
    sort(v.begin(), v.end(), compare());
    // for (auto p : v)
    // {
    //   cout << p[0] << " " << p[1] << " , ";
    // }
    // cout << endl;
    vector<int>dp(v.size(), 1);
    for (int i = 0; i < v.size(); i++)
    {
      int x = v[i][0];
      int y = v[i][1];
      for (int j = 0; j < i; j++)
      {


        if (v[j][0] < x and v[j][1] < y)
        {

          dp[i] = max(dp[i], dp[j] + 1);

        }
      }
    }
    int ans = 0;
    for (auto p : dp)
    {
      ans = max(ans, p);
    }

    return ans;
  }
};
int main()
{
  Solution s;
  vector<vector<int>>v = {{1, 3}, {3, 5}, {6, 7}, {6, 8}, {8, 4}, {9, 5}};
  vector<vector<int>>x = {{5, 4}, {6, 4}, {6, 7}, {2, 3}};
  cout << s.maxEnvelopes(x) << endl;
}