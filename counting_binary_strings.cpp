#include<bits/stdc++.h>
using namespace std;
int count_binary(int n) {
	if (n == 1)
	{
		return 2;
	}
	if (n == 2)
	{
		return 3;
	}
	return count_binary(n - 1) + count_binary(n - 2);
}
int main() {
	int n;
	cin >> n;
	cout << count_binary(n) << endl;
	return 0;
}