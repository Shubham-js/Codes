#include<bits/stdc++.h>
using namespace std;

bool sieve[1000001];
int main() {
	sieve[0] = sieve[1] = 1;
	for (int i = 2; i * i <= 1000000; i++)
		if (!sieve[i])
			for (int j = i * i; j <= 1000000; j += i)
				sieve[j] = 1;

	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		int counter = 1;
		while (N && counter < 1000000)
		{
			counter++;
			if (!sieve[counter])
				N--;
		}
		cout << counter << endl;
	}
}