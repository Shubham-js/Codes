#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		string str, x, y;
		cin >> str;
		if (str.length() == 1)
		{
			cout << str << endl;
		}
		else if (str.length() % 2 == 0)
		{
			for (int i = 0; i < str.length() / 2; i++)
			{
				x += str.at(i);

				y += str.at((str.length() / 2) + i);

			}

		}
		else {

			for (int i = 0; i < str.length() / 2; i++) {
				x += str.at(i);

				y += str.at(str.length() - i - 1);


			}


		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		if (x == y)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}

}