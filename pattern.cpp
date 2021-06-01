#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string str, p, s;

		cin >> str;
		cin >> p;
		string x = p;
		sort(str.begin(), str.end());
		sort(p.begin(), p.end());
		std::string::size_type i = str.find(p);

		if (i != std::string::npos)
			str.erase(i, p.length());
		cout << str << endl;


		//for (int i = 0; i < p.length(); i++)
		//{
		//	for (int j = 0; j < str.length(); j++)
		//	{

		//		if (p.at(i) == str.at(j))
		//		{
		//			//s = s + p.at(i);
//					str.remove
//
//					break;
//				}





//			}
//
//		}
//		cout << s << endl;


	}
}
