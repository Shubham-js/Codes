#include<bits/stdc++.h>
using namespace std;
int c;
void subsequence(char *input, char *output, int i, int j)
{

	if (input[i] == '\0')
	{
		output[j] = '\0';


		cout << output << " ";
		c++;

		return  ;
	}
	//including a character


	subsequence(input, output, i + 1, j);

	output[j] = input[i];

	subsequence(input, output, i + 1, j + 1);

	//excluding a character




}

int main() {
	char ch[100], out[100];
	cin >> ch;
	// char out[10];
	// char ch[] = "abc";
	cout << "  " ;
	subsequence(ch, out, 0, 0);
	cout << endl;
	cout << c << endl;


	return 0;
}