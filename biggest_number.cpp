#include<bits/stdc++.h>
using namespace std;
bool comparator(string X, string Y)
{

	string XY = X + Y;


	string YX = Y + X;


	return XY > YX;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		string sum = "";
		sort(a, a + n, comparator);
		for (int i = 0; i < n; i++)
		{
			sum  = sum + a[i];
		}
		cout << sum << endl;
	}
	return 0;
}