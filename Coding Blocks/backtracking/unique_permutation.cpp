#include<bits/stdc++.h>
using namespace std;
void permutation(char *ch, int i, set<string>s)
{

	//base case
	if (ch[i] == '\0')
	{
		//cout << ch << ",";
		string ans(ch);
		s.insert(ans);
		return;
	}
	//recursive case
	for (int j = i; ch[j] != '\0'; j++)
	{
		swap(ch[i], ch[j]);
		permutation(ch, i + 1, s);
		//backtracking
		swap(ch[i], ch[j]);
	}

}
int main() {
	char ch[100];
	cin >> ch;
	set<string> s;
	permutation(ch, 0, s);
	for (auto i : s) {
		cout << i << endl;
	}



}