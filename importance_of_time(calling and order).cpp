#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	deque<int>calling, ideal;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		calling.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		ideal.push_back(temp);
	}
	int sum = 0;

	while (!ideal.empty())
	{



		int c = 0;
		while (calling.front() != ideal.front())
		{
			c++;
			int x = calling.front();
			calling.pop_front();
			calling.push_back(x);


		}

		if (calling.front() == ideal.front()) {
			calling.pop_front();
			ideal.pop_front();
			sum += c + 1;


		}



	}
	cout << sum << endl;
	return 0;
}