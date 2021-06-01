#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int key;

	cin >> key;

	//method to find an element;

	//cout << *(a + n - 1) << endl;
	//auto it = find(a, a + n, key);
	//cout << it - a << endl;
	//delete []a;
	//return 0;



	//using binary search and lower bound and upper bound
	bool ans = binary_search(a, a + n, key);
	if (ans)
	{
		cout << "present" << endl;
	}
	else
	{
		cout << "not present" << endl;
	}
	int *lb = lower_bound(a, a + n, key);
	cout << "index of element is " << lb - a << endl;
	int *ub = upper_bound(a, a + n, key);
	cout << "Upper bound is " << ub - a << endl;
	if (lb == ub)
	{
		cout << "not present" << endl;
	}
	cout << "frequency of element " << ub - lb << endl;
	delete [] a;
	return 0;
}

