#include<iostream>
using namespace std;
bool sorted(int *a, int n, int i)
{
	//base case
	if (i == n)
	{
		return true;
	}
	//recursive case
	if (a[i] <= a[i + 1])
	{
		return sorted( a, n, i + 1);
	}
	return false;

}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (sorted(a, n, 0))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}