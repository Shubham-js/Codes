class Solution {
public:
    int largestRectangleArea(vector<int> h) {
        stack<int> st; h.push_back(0); int ans = 0;
        for (int i = 0; i < h.size(); ++i) {
            while (st.size() > 0 && h[st.top()] >= h[i]) {
                int height = h[st.top()]; st.pop();
                int width = st.size() > 0 ? i - 1 - st.top() : i;
                ans = max(ans, height * width);
            }
            //cout<<h[i]<<endl;
            st.push(i);
        }
        return ans;

    }
    int maximalRectangle(vector<vector<char>>& v) {
        if (v.size() == 0)
        {
            return 0;
        }
        vector<int>h(v[0].size(), 0);
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (v[i][j] - 48 == 0)
                {
                    h[j] = 0;
                }
                else
                {
                    h[j] += 1;
                }
            }
            ans = max(ans, largestRectangleArea(h));

        }
        return ans;
    }
};