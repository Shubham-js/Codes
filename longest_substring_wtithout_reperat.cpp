#include <bits/stdc++.h>
using namespace std;
int longestUniqueSubsttr(string str)
{
	int n = str.size();

	int res = 0;

	vector<int> lastIndex(256, -1);


	int i = 0;


	for (int j = 0; j < n; j++) {


		i = max(i, lastIndex[str[j]] + 1);
		cout << "i " << i << endl;


		res = max(res, j - i + 1);
		cout << "res " << res << endl;

		lastIndex[str[j]] = j;
		cout << "lastIndex " << lastIndex[str[j]] << endl;
		cout << str[j] << endl;
		cout << "j " << j << endl;
	}
	return res;
}
int main() {
	string s;
	cin >> s;
	int l = longestUniqueSubsttr(s);
	cout << l << endl;

}