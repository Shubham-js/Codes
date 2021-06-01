// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	char ch[100];

// 	cin >> ch;
// 	while (next_permutation(ch, ch + strlen(ch)))
// 	{
// 		cout << ch << endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;

void permute(string str, string a, int l, int r)
{
	// Base case
	if (l == r) {
		if (a > str)
			cout << a << endl;
	}
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(a[l], a[i]);
			permute(str, a, l + 1, r);
			swap(a[l], a[i]);
		}
	}
}
int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int n = str.size();
	permute(str, str, 0, n - 1);
	return 0;
}