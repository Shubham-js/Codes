class Solution {
public:
    bool isBipartite(vector<vector<int>>&v) {

        int n = v.size();
        vector<int>visited(n, 0);

        //1 for blue -1 for red and 0 for unvisited

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 1 or visited[i] == -1)continue;
            queue<int>q;
            q.push(i);
            visited[i] = 1;
            while (!q.empty())
            {
                int node = q.front();

                for (auto nbr : v[node])
                {
                    if (visited[nbr] == 0)
                    {
                        q.push(nbr);
                        visited[nbr] = -visited[node];
                    }
                    if (visited[node] == visited[nbr])
                    {
                        return false;
                    }
                }
                q.pop();

            }
        }
        return true;

    }
};