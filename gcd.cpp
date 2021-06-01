#include<bits/stdc++.h>
using namespace std;
int hcff(int a, int b)
{
	return b == 0 ? a : hcff(b, a % b);
}
int main() {
	int a, b;
	cin >> a >> b;
	int ans = hcff(a, b);
//hcf
	cout << ans << endl;
	//lcm =hcf/(a*b);
	cout << (a * b) / ans << endl;
}