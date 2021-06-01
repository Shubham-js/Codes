#include <bits/stdc++.h>

using namespace std;
char keypad[][10] = {"", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx", "yz" };

int keypad_codes(char *ch, char* out, int i, int j)
{
	if (ch[i] == '\0')
	{
		out[j] = '\0';
		cout << out << " ";
		return 1;
	}
	int sum = 0;
	int digit = ch[i] - '0';
	for (int x = 0; keypad[digit][x] != '\0'; x++)
	{
		out[j] = keypad[digit][x];
		sum += keypad_codes(ch, out, i + 1, j + 1);
	}
	return sum;

}
int main() {
	char ch[100], out[100];
	cin >> ch;
	int ans = keypad_codes(ch, out, 0, 0);
	cout << endl;
	cout << ans << endl;

}
