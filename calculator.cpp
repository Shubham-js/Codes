#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	char s;
	cin >> s;
	switch (s) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a*b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "Out of choices";
	}
	return 0;
}