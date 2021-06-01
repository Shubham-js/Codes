#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;

	int k, ans = 0, sum, prev;
	cin >> k;
	//cout << k << endl;
	if (a == k or b == k)
	{
		cout << 0 << endl;
	}
	else if ( a<k and b>k)
	{
		ans = min(k - a, b - k);
		cout << ans << endl;
	}
	else {
		sum = a + b;

		ans = abs(sum - k);
		//cout << ans << endl;
		prev = INT_MAX;
		while (ans < prev) {

			prev = ans;
			a = b;
			b = sum;
			sum = a + b;

			ans = min(abs(sum - k), ans);



		}
		cout << ans << endl;
	}


}