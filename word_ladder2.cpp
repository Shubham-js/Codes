class Solution {
public:

    vector<vector<string>>v;
    int min_size = INT_MAX;
    bool diff(string x, string y)
    {
        int i = 0, c = 0;
        while (i < x.length())
        {
            if (x[i] != y[i])
            {
                c++;
                if (c == 2)
                {
                    return false;
                }
            }
            i++;
        }
        return c == 1;
    }
    void ladder(string b, string e, vector<int>&visited, vector<string>&w, vector<string>&x)
    {
        if (b == e)
        {

            v.push_back(x);
            min_size = min_size > x.size() ? x.size() : min_size;
            return;
        }

        for (int i = 0; i < w.size(); i++)
        {
            if (w[i] != b and visited[i] != 1 and diff(b, w[i]))
            {
                //cout<<w[i]<<endl;
                visited[i] = 1;
                x.push_back(w[i]);
                //cout<<w[i]<<endl;
                ladder(w[i], e, visited, w, x);

                visited[i] = 0;
                x.pop_back();



            }
        }
    }
    vector<vector<string>> findLadders(string b, string e, vector<string>& w) {
        vector<string>x;
        vector<int>visited(w.size(), 0);
        x.push_back(b);
        for (int i = 0; i < w.size(); i++)
        {
            if (w[i] == b)
            {
                visited[i] = 1;
                break;
            }
        }

        ladder(b, e, visited, w, x);
        vector<vector<string>>ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].size() == min_size)
            {
                ans.push_back(v[i]);
            }
        }
        // cout<<min_size<<endl;
        return ans;
    }
};