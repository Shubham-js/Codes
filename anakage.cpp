#include<iostream>
#include <string>

#include<vector>

using namespace std;
string add2string(string a, string b)
{
	return a + b;
}
bool pattern_matcher(string s, string t)
{
	int j = 0, c = 0;
	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] == t[j])
		{
			c++;
			j++;


		}
		else
		{

			if (c == t.length())
			{
				return true;
			}
			c = 0;
		}
	}
	//for the case if the pattern is present at the last;
	if (c == t.length())
	{
		return true;
	}
	return false;


}
string reverseit(string s)
{
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		str = s[i] + str;
	}
	return str;
}
string space_remover()
{
	string s, str;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			str += s[i];
		}
	}
	return str;
}
int word_count()
{
	string x = space_remover()
	           return x.length();
}
string vowels()
{
	string s, str;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != 'a' and s[i] != 'e' and s[i] != 'o' and s[i] != 'i' and s[i] != 'u')
		{
			str += s[i];
		}
	}
	return str;
}

int main()
{
	int d;
	int c = 0;
	vector<int>v;
	while (cin >> d)
	{
		c++;
		v.push_back(d);
		switch (d)
		{
		case 1: {
			string a, b;
			cin >> a >> b;
			cout << add2string(a, b) << endl;
			break;
		}
		case 2: {
			string s, t;
			cin >> s >> t;
			if (pattern_matcher(s, t))
			{
				cout << "true" << endl;
			}
			else
			{
				cout << "false" << endl;
			}

			break;
		}
		case 3:
		{
			string s;
			cin >> s;
			cout << reverseit(s) << endl;
			break;
		}
		case 4:
		{
			cout << space_remover() << endl;
			break;
		}
		case 5:
		{
			cout << word_count() << endl;
			break;

		}
		case 6:
		{
			cout << vowels() << endl;
			break;
		}
		case 7:
		{
			v.pop_back();
			break;
		}
		case 8:
		{
			v.push_back(v[v.size() - 1]);
			break;
		}
		case 9:
		{
			cout << v.size() << endl;
			break;
		}

		case 10{

				cout << v[v.size() - 1] << endl;
				break;
			}
		case 11:
			{
				int n;
				cin >> n;
				cout << v[v.size() - n - 2] << endl;
				break;
			}
		default:
			cout << "No such instructions" << endl;
		}
	}
	return 0;
}