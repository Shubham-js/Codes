/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int first = v[0];
	int second = -1;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > first)
		{
			second = first;
			first = v[i];
		}
		else if (v[i] < first)
		{
			second = max(v[i], second);
		}
	}
	cout << second << endl;
	return 0;
}