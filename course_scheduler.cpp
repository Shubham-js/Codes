#include<bits/stdc++.h>
using namespace std;

bool comparator(vector<int>a, vector<int>b)
{
    if (a[1] == b[1])
    {
        return a[0] < b[0];
    }
    return a[1] < b[1];
}
int schedule(vector<vector<int>>&v, int i, int sum, int c)
{
    if (i == v.size())
    {
        return c;
    }
    int x = 0, y = 0;
    if (sum + v[i][0] > v[i][1] )
    {
        x = schedule(v, i + 1, sum, c);
        // if (v[i][0] <= v[i][1])
        //     y = schedule(v, i + 1, v[i][0], c + 1);
    }
    else
    {
        x = schedule(v, i + 1, sum, c);
        y = schedule(v, i + 1, sum + v[i][0], c + 1);
    }
    return max(x, y);

}
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        // sort(courses.begin(), courses.end(), comparator);
        return schedule(courses, 0, 0, 0);

    }
};
int main()
{
    vector<vector<int>>v = {{5, 15}, {3, 19}, {6, 7}, {2, 10}, {5, 16}, {8, 14}, {10, 11}, {2, 19}};
    vector<vector<int>>x = {{7, 16}, {2, 3}, {3, 12}, {3, 14}, {10, 19}, {10, 16}, {6, 8}, {6, 11}, {3, 13}, {6, 16}};
    Solution s;
    cout << s.scheduleCourse(x);
    return 0;
}