#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		set<string>result;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 1; j <= s.length() - i ; ++j)
			{
				string x = s.substr(i, j);
				string y = x;
				reverse(y.begin(), y.end());
				int c = 0;
				for (int k = i ; k < j; k++)
				{

					if (s.at(k) == '1')
					{
						c++;
					}

				}
				//cout << "x = " << x << " y = " << y << endl;


				// if (c % 2 != 0)
				// {
				// 	//cout << x << endl;
				// 	result.insert(x );
				// }

				if (c > 0 and c % 2 == 0 ) {
					if (  result.find(y) != result.end())
					{
						continue;
					}
					else
					{
						result.insert(x);
					}
				}


				//cout << x << endl;

				result.insert(x);




			}
		}//  for (set<string>:: iterator it = result.begin(); it != result.end(); it++)
		// 	cout << *it << endl;
		cout << result.size() << endl;
	}


	return 0;
}