#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>a = {1, 0, 1, -1, -1, 0, 1, -1};
    vector<int>b = {1, 1, 0, -1, 0, -1, -1, 1};
    int rows_current = 1;
    int rows_next = 0;
    queue<int>row, column;
    int visited[105][105] = {0};
    void explore_neighbour(vector<vector<int>>& v, int r, int c, int x, int y)
    {
        for (int i = 0; i < 8; i++)
        {
            int rr = r + a[i];
            int cc = c + b[i];
            if (rr<0 or rr >= x or cc<0 or cc >= y or visited[rr][cc] or v[rr][cc] == 1 )
            {
                continue;
            }
            row.push(rr);
            column.push(cc);
            visited[rr][cc] = 1;
            rows_next++;

        }
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& v) {
        int R = v.size();
        int C = v[0].size();

        int count = 1;
        if (v[0][0] != 0)
        {
            return -1;
        }
        visited[0][0] = 1;
        row.push(0);
        column.push(0);
        bool reached = false;
        while (!row.empty())
        {
            int r = row.front();
            int c = column.front();
            row.pop();
            column.pop();
            if (r == R - 1 and c == C - 1)
            {
                reached = true;
                break;
            }

            explore_neighbour(v, r, c, R, C);
            rows_current--;
            if (rows_current == 0)
            {
                //cout << rows_next << endl;
                rows_current = rows_next;
                rows_next = 0;
                count++;
            }

        }
        if (reached)
        {
            return count;
        }
        return -1;
    }

};
int main() {
    vector<vector<int>> v = {{0, 0, 0}, {1, 1, 0}, {1, 1, 0}};
    Solution s;
    cout << s.shortestPathBinaryMatrix(v) << endl;

}