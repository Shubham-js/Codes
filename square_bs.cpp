#include <bits/stdc++.h>
using namespace std;
float squareroot(int n)
{
	int ans = -1;
	int s = 0;
	int e = n;
	while (s <= e)
	{
		int mid = (s + e) >> 1;
		if (mid * mid == n)
		{

			return mid;
		}
		else if (mid * mid > n)
		{
			e = mid - 1;
		}
		else
		{
			ans = mid;
			s = mid + 1;
		}

	}
	float inc = 0.1;
	for (int i = 1; i <= 3; i++)
	{
		while (ans * ans <= n)
		{
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc / 10;
	}
	return ans;

}

int main() {
//square root using binary search
	int n;
	cin >> n;
	cout << squareroot(n) << endl;

	return 0;
}
