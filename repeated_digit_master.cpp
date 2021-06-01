#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, c = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int arr[10] = {0};
		int num = i;
		while (num > 0) {
			int rev = num % 10;
			if (arr[rev] == 1)
				break;
			arr[rev] = 1;
			num /= 10;
		}
		if (num > 0) {
			c++;
			cout << i << endl;
		}
	}
	cout << c << endl;
	return 0;
}