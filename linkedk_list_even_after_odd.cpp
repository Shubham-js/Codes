#include<bits/stdc++.h>
using namespace std;

int main() {
	list<int>l;
	int n;
	cin >> n;
	int in;

	for (int i = 0; i < n; i++)
	{
		cin >> in;


		if (in % 2 == 0 or in == 0)
		{
			l.push_back(in);
		}
		else
		{
			l.push_front(in);
		}
	}
	for (int i : l)
	{
		cout << i << " ";
	}
	return 0;

}