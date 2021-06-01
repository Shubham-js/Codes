class Solution {
public:
    int bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
    unsigned int setcount(unsigned int n)
    {
        int x = 0;
        if (n == 0)
        {
            return bits[0];
        }
        x = n & 0xf;
        return bits[x] + setcount(n >> 4);

    }
    vector<int> countBits(int n) {
        vector<int>v;
        for (int i = 0; i <= n; i++)
        {
            v.push_back(setcount(i));

        }
        return v;

    }
};