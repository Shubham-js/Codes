#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main() {
	int n;
	cin >> n;
	int a = n - 2;
	while (gcd(n, a) != 1)
	{
		a = a - 1;
	}
	cout << a << endl;

}