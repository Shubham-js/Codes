#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, ans = 0, s = 2147483647;
		cin >> n >> k;
		while (n--) {
			int temp;
			cin >> temp;
			if (temp != 0 && k % temp == 0 && s > (k / temp)) {
				s = (k / temp);
				ans = temp;
			}
		}
		if (s == 2147483647)
			cout << -1 << endl;
		else
			cout << ans << endl;

	}

	return 0;
}