// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}
// 	unordered_map<int, int>m;
// 	queue<int>q;
// 	vector<int>v;
// 	int length = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (m[a[i]] > 0)
// 		{
// 			length = q.size();
// 			v.push_back(length);
// 			while (q.front() != a[i] and !q.empty())
// 			{
// 				int x = q.front();
// 				m[x] = 0;
// 				q.pop();

// 			}
// 			q.pop();
// 			m[a[i]] = 0;
// 			q.push(a[i]);

// 		}
// 		else {
// 			m[a[i]]++;
// 			q.push(a[i]);
// 		}



// 	}
// 	int sum = 0;
// 	v.push_back(q.size());
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		int j = 1;
// 		int x = v[i];
// 		while (x > 0)
// 		{

// 			sum += (j * x);
// 			//cout << "x " << x << " j " << j << endl;
// 			//cout << sum << endl;
// 			j++;
// 			x--;
// 		}
// 	}
// 	cout << sum << endl;
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	unordered_map<int, int>m;
	int j = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		while (j < n and m.find(a[j]) == m.end())
		{
			m[a[j]] = j;
			j++;
		}
		ans += ((j - i + 1) * (j - i + 2)) / 2;
		m.erase(a[i]);
	}
	cout << ans << endl;
}