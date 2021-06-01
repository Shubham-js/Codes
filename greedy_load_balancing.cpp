#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;



	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	if (sum % n != 0) {
		cout << "-1" << endl;


	}
	else
	{
		sum = sum / n; //load on each processor

		int minimum_rounds = INT_MIN;
		int current_requirement = 0;
		int load = 0;
		for (int i = 0; i < n; i++)
		{
			current_requirement += a[i];
			load = abs(current_requirement - ((i + 1) * sum));
			//cout << load << endl;

			minimum_rounds = max(minimum_rounds, load);
		}
		cout << minimum_rounds << endl;















	}






	return 0;


}




// 3
// 0 99 3

// 2
// 49 50

// 8
// 16 17 15 0 20 1 1 2

// 10
// 0 0 100 0 0 0 0 0 0 0

// -1