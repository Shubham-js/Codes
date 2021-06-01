#include<bits/stdc++.h>
using namespace std;
char ch[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void generate_names(char *in, char *out, int i, int j)
{
	//base case
	if (in[i] == '\0')
	{
		out[j] = '\0';
		cout << out << endl;
		return;

	}
	//recursive case;
	int digit = in[i] - '0';

	for (int k = 0; ch[digit][k] != '\0'; k++)
	{
		out[j] = ch[digit][k];
		generate_names(in, out, i + 1, j + 1);
	}

	return;

}
int main() {

	char in[100], o[100];
	int i = 0;
	cin >> in;

	generate_names(in, o, 0, 0);
	return 0;
}