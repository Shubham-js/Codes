#include<bits/stdc++.h>
using namespace std;
class compare {
public:
    bool operator() (pair<int, int>a, pair<int, int>b)
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};
class Solution {
public:

    vector<int> kWeakestRows(vector<vector<int>>&v, int k) {

        priority_queue <pair<int, int>, vector<pair<int, int>>, compare>pq;
        for (int i = 0; i < v.size(); i++)
        {   int sum = 0;
            for (int x : v[i])
            {
                sum += x;
            }
            pq.push({i, sum});
        }
        vector<int>x;
        // while (!pq.empty())
        // {
        //     pair<int, int>p = pq.top();
        //     pq.pop();
        //     cout << p.first << " " << p.second << endl;
        // }
        // cout << endl;
        while (k--)
        {
            pair<int, int> p = pq.top();
            x.push_back(p.first);
            pq.pop();
        }
        return x;

    }
};
int main()
{
    vector<vector<int>>v = {{1, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 0}
    };
    Solution s;
    vector<int>x = s.kWeakestRows(v, 2);
    for (auto p : x)
    {
        cout << p << " ";
    }
    return 0;
}