#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;

		int primes[b + 1];
		primes[0] = 0;
		primes[1] = 0;

		for (int i = 2; i <= b; i++) {
			if ((i & 1) == 0 || i < a) {
				primes[i] = 0;
			} else {
				primes[i] = 1;
			}
		}
		if (2 >= a) {
			primes[2] = 1;
		}
		for (int i = 3; i <= b; i += 2) {

			int j = 2;
			while (i * j <= b) {
				primes[i * j] = 0;
				j++;
			}
		}

		int count = 0;
		for (int i = 0; i <= b; i++) {
			if (primes[i]) {
				count++;
			}
		}

		cout << count << endl;
	}
}