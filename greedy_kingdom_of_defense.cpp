#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	int l, b, n;
	cin >> t;
	while (t--)
	{
		cin >> l >> b >> n;


		int delx[40010], dely[40010];

		for (int i = 0; i < n; ++i)
		{
			cin >> delx[i] >> dely[i];
		}
		sort(delx, delx + n);
		sort(dely, dely + n);
		int delta_x = delx[0] - 1, delta_y = dely[0] - 1;
		for (int i = 1; i < n; ++i)
		{
			delta_x = max(delta_x, delx[i] - delx[i - 1] - 1);
			delta_y = max(delta_y, dely[i] - dely[i - 1] - 1);
		}
		//corner case where the grid ends;
		delta_x = max(delta_x, l - delx[n - 1]);
		delta_y = max(delta_y, b - dely[n - 1]);


		cout << delta_y*delta_x << endl;

	}

	return 0;
}