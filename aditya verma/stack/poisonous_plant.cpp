#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
	int succ_death = 0, max_death = 0;
	stack<ll>s;
	int n;
	cin >> n;
	ll a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (s.size() == 0) {
			s.push(a[i]);
			// max_death = max(succ_death, max_death);
			// succ_death = 0;

		}
		else if (a[i] >= s.top()) {
			s.push(a[i]);
			max_death = max(succ_death, max_death);
			succ_death = 0;

		}
		else if (a[i] < s.top())
		{
			while (s.size() != 0 and a[i] < s.top())
			{
				succ_death++;
				s.pop();
			}
			if (s.size() != 0)
			{
				max_death = max(succ_death, max_death);
				succ_death = 0;
			}
			s.push(a[i]);


		}
	}
	max_death = max(succ_death, max_death);
	cout << max_death << endl;
	return 0;
}