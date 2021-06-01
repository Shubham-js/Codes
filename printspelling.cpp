#include<bits/stdc++.h>
using namespace std;

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printspell(int n) {
	if (n == 0)
	{
		return;
	}
	printspell(n / 10);
	int digit = n % 10;
	cout << words[digit] << " ";
	return;
	//bottom up as function is called before action

}
int main()
{
	int n;
	cin >> n;
	printspell( n);
	return 0;
}