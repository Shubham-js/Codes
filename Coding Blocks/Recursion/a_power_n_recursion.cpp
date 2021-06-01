#include <bits/stdc++.h>
using namespace std;
int multiply(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return a + multiply(a, b - 1);
}
// powerfun(int a, int n)
// {
// 	if (n == 0)
// 	{
// 		return 1;
// 	}
// 	return a * powerfun(a, n - 1);
// }
// int main() {
// 	int a, n;
// 	cin >> a >> n;
// 	cout << powerfun(a, n) << endl;
//}
// function to multiply without *
int main()
{
	int a, b;
	cin >> a >> b;
	cout << multiply(a, b) << endl;
	return 0;
}