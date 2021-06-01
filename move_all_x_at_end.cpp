#include <bits/stdc++.h>
using namespace std;

string shiftXtoEnd(const char* ar, int i, int c, string ans) {
	if (ar[i] == '\0') {
		for (int i = 0; i < c; ++i)
		{
			ans += 'x';
		}
		return ans;
	}
	if (ar[i] == 'x') {
		return shiftXtoEnd(ar, i + 1, c + 1, ans);
	}

	return shiftXtoEnd(ar, i + 1, c, ans + ar[i]);
}
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	const char * c = s.c_str();
	cout << shiftXtoEnd(c, 0, 0, "") << endl;
	return 0;
}