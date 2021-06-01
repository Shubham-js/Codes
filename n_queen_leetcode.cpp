class Solution {
public:
    bool isSafe(vector<string>&board, int i, int j, int n) {
        //check for column

        for (int row = 0; row < i; row++)
        {
            if (board[row][j] == 'Q')
            {
                return false;
            }

        }
        for (int col = 0; col < n; col++)
        {
            if (board[i][col] == 'Q')
            {
                return false;
            }
        }
        //check for left diagonal
        int x = i, y = j;
        while (x >= 0 and y >= 0)
        {
            if (board[x][y] == 'Q')
            {
                return false;
            }
            x--;
            y--;
        }
        //check for right diagonal
        x = i, y = j;
        while (x >= 0 and y < n)
        {
            if (board[x][y] == 'Q')
            {
                return false;
            }
            x--;
            y++;
        }
        //now the position is safe
        return true;


    }
    vector<vector<string>>v;
    bool queenPlacer(vector<string>&s, int i, int n)
    {
        if (i == n)
        {
            // for(int i=0;i<n;i++)
            // {
            //     for(int j=0;j<n;j++)
            //     {
            //         cout<<s[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            v.push_back(s);
            return false;
        }
        for (int j = 0; j < s[i].size(); j++)
        {
            if (isSafe(s, i, j, n))
            {
                //cout<<i<<" "<<j<<endl;
                s[i][j] = 'Q';
                bool queenrakhe = queenPlacer(s, i + 1, n);
                if (queenrakhe)
                {
                    return true;
                }
                s[i][j] = '.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>s;
        string x = "";
        for (int i = 0; i < n; i++)
        {
            x += '.';
        }
        for (int i = 0; i < n; i++)
        {
            s.push_back(x);
        }
        queenPlacer(s, 0, n);
        return v;
    }
};