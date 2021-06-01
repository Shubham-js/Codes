#include <bits/stdc++.h>
using namespace std;
void pi_pi(char *c, int i, char *temp, int j)
{
	if (c[i] == '\0')
	{
		temp[j] = '\0';
		cout << temp << endl;
		return;
	}
	if (c[i] == 'p' and c[i + 1] == 'i')
	{
		temp[j] = '3';
		temp[j + 1] = '.';
		temp[j + 2] = '1';
		temp[j + 3] = '4';
		pi_pi(c, i + 2, temp, j + 4);
	}
	else
	{
		temp[j] = c[i];
		pi_pi(c, i + 1, temp, j + 1);
	}

}
int main() {
	int t;
	cin >> t;
	char c[1001];
	char temp[1001];
	while (t--) {
		cin >> c;
		pi_pi(c, 0, temp, 0);

	}

}