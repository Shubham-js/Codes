#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		// Declare the variables
		int a, b, i, j, c = 0;

		// Ask user to enter lower value of interval
		//cout << "Enter lower bound of the interval: ";
		cin >> a; // Take input

		// Ask user to enter upper value of interval
		// cout << "\nEnter upper bound of the interval: ";
		cin >> b; // Take input

		// Print display message
		// cout << "\nPrime numbers between "
		//      << a << " and " << b << " are: ";

		// Explicitly handling the cases when a is less than 2
		if (a == 1) {
			//cout << a << " ";
			a++;
			if (b >= 2) {
				//
				c++;//cout << a << " ";
				a++;
			}
		}
		if (a == 2)
			c++;//out << a << " ";

		// MAKING SURE THAT a IS ODD BEFORE WE BEGIN
		// THE LOOP
		if (a % 2 == 0)
			a++;

		// NOTE : WE TRAVERSE THROUGH ODD NUMBERS ONLY
		for (i = a; i <= b; i = i + 2) {

			// flag variable to tell
			// if i is prime or not
			bool flag = 1;

			// WE TRAVERSE TILL SQUARE ROOT OF j only.
			// (LARGEST POSSIBLE VALUE OF A PRIME FACTOR)
			for (j = 2; j * j <= i; ++j) {
				if (i % j == 0) {
					flag = 0;
					break;
				}
			}

			// flag = 1 means i is prime
			// and flag = 0 means i is not prime
			if (flag == 1)
				c++;//ccout << i << " ";
		}
		cout << c << endl;
	}
	return 0;
}