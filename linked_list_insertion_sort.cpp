#include<bits/stdc++.h>
using namespace std;
int main() {
	list<int>l;
	int n;
	cin >> n;
	int d;


	while (n--)
	{
		cin >> d;
		l.push_front(d);
	}
	l.sort();
	for (int a : l)
	{
		cout << a << " ";
	}
}