#include<bits/stdc++.h>
using namespace std;
int main() {
	forward_list<int>f;
	int n, k;
	cin >> n >> k;
	int x = n / k;
	int a[n];
	for (int i = 0; i < x; i++)
	{
		int a = k;
		int val = 0;
		while (a--)
		{
			cin >> val;
			f.push_front(val);
		}
		for (int p : f)
		{
			cout << p << " ";
		}
		f.clear();
	}


}