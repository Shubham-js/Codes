#include<bits/stdc++.h>
using namespace std;




// 4                                                       Test cases
// aba
// baba
// aba
// xzxb
// 3
// aba
// xzxb
// ab
int main() {
	int n;
	cin >> n;
	map<string, int> m;
	string temp;
	for (int i = 0; i < n; i++)
	{

		cin >> temp;
		m[temp]++;

	}
	int q;
	cin >> q;
	while (q--)
	{
		cin >> temp;
		//cout << m.at(temp) << endl;
		if (m[temp] >= 1)
		{
			cout << m[temp] << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}
