#include<bits/stdc++.h>
using namespace std;



int main()
{
	int a, b = 0;
	int sum = 0;
	int t;
	cin >> t;
	int arr[t];

	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}

	//int c = *max_element(arr, arr + t);
	//int d = (int)log2(c) + 1;
	//cout << d << endl;



	for (int i = 0; i < t; i++)
	{

		while (arr[i] > 0)
		{
			if (arr[i] % 2 == 0)
				a++;
			else
				b++;
		}
		if (a == b)
		{
			sum++;
		}
	}
	cout << sum;


	//bitset<d> x(c);
	//cout << x;


}
