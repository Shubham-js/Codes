#include<bits/stdc++.h>
using namespace std;
int main() {
	int d1 = 0, v1 = 0, d2 = 0, v2 = 0, p = 0;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int d = 1, v = 0;
	int a = min(d1, d2);
	if (a > d)
	{
		d = a;
	}
	while (d1 < d2 and v < p)
	{
		v += v1;
		d1++;
		d++;
	}
	while (d2 < d1 and v < p)
	{
		v += v2;
		d2++;
		d++;
	}
	while (v < p)
	{
		v = v + v1 + v2;
		d++;
	}
	cout << d - 1 << endl;
}