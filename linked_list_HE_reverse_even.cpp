#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	list<int>l;
	list<int>even;
	int data;
	for (int i = 0; i < n; ++i)
	{
		cin >> data;
		if (data % 2 == 0)
		{
			even.push_front(data);
		}
		else
		{
			l.push_back(data);
		}

	}
}