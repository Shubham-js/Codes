#include <bits/stdc++.h>
using namespace std;
void check_for_non_continupus_b(char *a, int n, int i, vector<string>& v) {

	if (i == n)
	{
		a[i] = '\0';
		for (int i = 1; i < n; i++)
		{
			if (a[i] == 'b' and a[i - 1] == 'b')
			{
				return;
			}
		}
		v.push_back(a);

		//cout << a << endl;
		return;

	}
	a[i] = 'b';

	check_for_non_continupus_b(a, n, i + 1, v);

	a[i] = 'a';
	check_for_non_continupus_b(a, n, i + 1, v);


}
int main() {
	int t;
	char ch[26];

	cin >> t;
	int c = 0;
	while (t--)
	{
		c++;
		vector<string>v;
		int n;
		cin >> n;
		check_for_non_continupus_b(ch, n, 0, v);
		cout << "#" << c << " : " << v.size() << endl;
	}
}