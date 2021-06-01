// 5
// AAAA
// BBBBB
// ABABABAB
// BABABA
// AAABBB


// 3
// 4
// 0
// 0
// 4













#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    char x = s.at(0);
    int c = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s.at(i) == x)
        {
            c++;

        }
        else
        {
            x = s.at(i);
        }
    }
    return c;

}

int main()
{


    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        cout << result << "\n";
    }



    return 0;
}
