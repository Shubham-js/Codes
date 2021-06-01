// #include <bits/stdc++.h>
// using namespace std;
// int superDigit(string s, int ans) {
// 	if (ans > 0 and ans <= 9)
// 	{
// 		return ans;
// 	}
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		ans += (s[i] - '0');
// 	}
// 	s = to_string(ans);
// 	if (ans > 9)
// 	{
// 		ans = 0;
// 	}
// 	return superDigit(s, ans);
// }
// int main() {
// 	string n, p;
// 	cin >> n;
// 	int k;
// 	cin >> k;
// 	while (k > 0)
// 	{
// 		p = p + n;
// 	}
// 	int ans = superDigit(p, 0);
// 	cout << ans << endl;
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int digit_sum_finder(string s) {
	int rem = 0;
	for (int i = 0; i < s.length(); ++i) {
		rem = (rem + (s[i] - '0')) % 9;
	}

	return rem % 9;
}

int main() {
	string s;
	cin >> s;

	int k;
	cin >> k;
	k = k % 9;

	if (k == 0) {
		cout << "9";
		return 0;
	}
	else {
		int digit_sum = digit_sum_finder(s);
		digit_sum = (digit_sum * k) % 9;

		if (digit_sum != 0) {
			cout << digit_sum;
		}
		else {
			cout << "9";
		}
	}
}