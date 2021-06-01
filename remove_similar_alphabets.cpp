#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char ch[n + 1];
    cin >> ch;
    stack<char>s;
    s.push(ch[0]);
    for (int i = 1; i < n; ++i)
    {
        if (!s.empty() and ch[i] == s.top())
        {
            s.pop();
        }
        else {
            s.push(ch[i]);
        }
    }
    cout << s.size() << endl;

    stack<char>st;
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }


    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

}