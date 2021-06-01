#include<bits/stdc++.h>
using namespace std;
int main() {
// 	int a = 5;
// 	int b = 9;
// 	int c = a & b;
// 	int d = a | b;
// 	int e = a ^ b;
// 	cout <<  c << endl;
// 	cout << d << endl;
// 	cout << e << endl;


	// //finding unique numbers where each number is repeated twice
	// int a[] = {2, 3, 4, 5, 4, 3, 2};
	// int c = a[0];
	// for (int i = 1; i < 7; ++i)
	// {
	// 	/* code */

	// 	c = c ^ a[i];
	// }
	// cout << c << endl;
	//5 is the output

// //find a number to be odd or even
// 	if (c+1 and 1 == 1)
// 	{
// 		cout << "odd" << endl;
// 	}

	//finding ith bit
	int n = 8; //101
	//find the bit no.2 ie 0
	//creating a mask
	int i = 1;
	int mask = 1 << i;
	//mask = 100
	int ans = (n & mask) > 0 ? 1 : 0;
	cout << ans  << endl;
}