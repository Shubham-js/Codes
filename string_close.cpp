#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class Solution {
public:

    bool closeStrings(string word1, string word2) {
        int a[27] = {0}, b[27] = {0};


        if (word1.length() != word2.length())
        {
            return false;
        }
        int n = word1.length();
        for (int i = 0; i < n; i++)
        {
            int x = word1[i] - 96;

            int y = word2[i] - 96;


            a[x]++;
            b[y]++;
        }
        for (int i = 0; i < 27; i++)
        {
            if ((a[i] > 0 and b[i] == 0) or (a[i] == 0 and b[i] > 0))
            {
                return false;
            }

        }
        sort(a, a + 27);
        sort(b, b + 27);

        for (int i = 0; i < 27; i++)
        {

            if (a[i] != b[i])
            {
                return false;
            }
        }

        return true;

    }
};
int main()
{   Solution so;
    string s, t;
    cin >> s >> t;
    cout << so.closeStrings(s, t);
    return 0;
}