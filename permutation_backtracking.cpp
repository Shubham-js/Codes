#include<bits/stdc++.h>
using namespace std;
void permutation(char *ch, int i)
{

	//base case
	if (ch[i] == '\0')
	{
		cout << ch << ",";
		return;
	}
	//recursive case
	for (int j = i; ch[j] != '\0'; j++)
	{
		swap(ch[i], ch[j]);
		permutation(ch, i + 1);
		//backtracking
		swap(ch[i], ch[j]);
	}

}
int main() {
	char ch[100];
	cin >> ch;
	permutation(ch, 0);



}