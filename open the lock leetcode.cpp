class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string, int>dead;
        for (auto x : deadends)
        {
            if (x == "0000")
            {
                return -1;
            }
            dead[x]++;
        }
        unordered_map<string, int>visited;
        visited["0000"] = 1;
        queue<pair<string, int>>q;
        q.push({"0000", 0});
        //level and string
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                int l = q.front().second;
                string s = q.front().first;
                q.pop();
                if (s == target)
                {
                    return l;
                }
                for (int i = 0; i < 4; i++)
                {
                    string inc = s.substr(0, i) + (s[i] == '9' ? '0' : char(s[i] + 1)) + s.substr(i + 1);
                    string dec = s.substr(0, i) + (s[i] == '0' ? '9' : char(s[i] - 1)) + s.substr(i + 1);
                    //cout<<inc<<" "<<l<<endl;
                    //cout<<dec<<" "<<l<<endl;
                    if (inc == target)
                    {
                        return l + 1;
                    }
                    if (dec == target)
                    {
                        return l + 1;
                    }
                    if (dead.find(inc) == dead.end() and visited.find(inc) == dead.end())
                    {
                        q.push({inc, l + 1});
                        visited[inc] = 1;
                    }
                    if (dead.find(dec) == dead.end() and visited.find(dec) == dead.end())
                    {
                        q.push({dec, l + 1});
                        visited[dec] = 1;
                    }
                }
            }
        }
        return -1;
    }
};