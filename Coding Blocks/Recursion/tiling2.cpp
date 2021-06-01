#include<bits/stdc++.h>
using namespace std;
int tile_ways(int n, int m)
{
	if (n == m)
	{
		return 2;
	}
	if (n < m)
	{
		return 1;
	}
	return tile_ways(n - 1, m) + tile_ways(n - m, m);


}
int main() {
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int ans = tile_ways( n, m);
		cout << ans << endl;
	}
}