#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int n;
	cin >> n;
	int * a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int pre = 0;
	unordered_map<int, int>m;
	int length = 0;
	//for cumilative sum and index
	for (int i = 0; i < n; ++i)
	{
		pre += a[i];
		if (pre == 0)
		{

			length = max(length, i + 1);
		}
		if (m.find(pre) != m.end())
		{
			length = max(length, i - m[pre]);
		}

		else
		{
			m[pre] = i;
		}
	}
	cout << length << endl;
}