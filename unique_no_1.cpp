#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x, y = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		y = y ^ x;
	}
	cout << y << endl;

}
