#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int optimal_game(ll *a, int i, int j, int n, int sum)
{
	if (n == 0)
	{
		return sum;
	}

	if (n % 2 == 0)
	{

		return max(optimal_game(a, i + 1, j, n - 1, sum + a[i]), optimal_game(a, i, j - 1, n - 1, sum + a[j]));

	}
	else
	{

		//sum+=a[i];
		return min(optimal_game(a, i + 1, j, n - 1, sum), optimal_game(a, i, j - 1, n - 1, sum));



	}


}
int main() {
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		/* code */
	}
	int ans = optimal_game(a, 0, n - 1, n, 0);
	cout << ans << endl;

}