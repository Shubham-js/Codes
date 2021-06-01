#include<bits/stdc++.h>
using namespace std;

int changeDigit(char t) {
	return '9' - t + 48;
}

int main() {
	char x[20], y;
	cin >> x;
	for (int i = 0 ; i < strlen(x) ; i++) {
		if (i == 0) {
			if (x[i] == '9')
				continue;
		}
		y = changeDigit(x[i]);
		if (x[i] > y)
			x[i] = y;
	}
	cout << x;
	return 0;
}