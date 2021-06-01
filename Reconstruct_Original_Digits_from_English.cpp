#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	string originalDigits(string s) {
		map<char, int>m;
		for (int i = 0; i < s.length(); i++)
		{
			m[s[i]]++;
		}
		//check for 0
		string ans;
		if (m.find('z') != m.end())
		{
			int x = m['z'];
			for (int i = 0; i < x; i++)
			{
				ans += "0";
				m['z']--;
				m['e']--;
				m['o']--;
				m['r']--;
			}
		}
		if (m.find('o') != m.end() and m.find('n') != m.end() and m.find('e') != m.end())
		{
			int x = min(m['o'], min(m['n'], m['e']));
			for (int i = 0; i < x; i++)
			{
				ans += "1";
				m['n']--;
				m['e']--;
				m['o']--;

			}

		}
		if (m.find('o') != m.end() and m.find('t') != m.end() and m.find('w') != m.end())
		{
			int x = min(m['o'], min(m['t'], m['w']));
			for (int i = 0; i < x; i++)
			{
				ans += "2";
				m['t']--;
				m['w']--;
				m['o']--;

			}

		}
		if (m.find('t') != m.end() and m.find('h') != m.end() and m.find('r') != m.end() and m.find('e') != m.end())
		{
			int x = min(m['t'], min(m['h'], min(m['r'], m['e'] / 2)));
			for (int i = 0; i < x; i++)
			{
				ans += "3";
				m['t']--;
				m['h']--;
				m['r']--;
				m['e'] -= 2;

			}

		}
		if (m.find('f') != m.end() and m.find('o') != m.end() and m.find('r') != m.end() and m.find('u') != m.end())
		{
			int x = min(m['f'], min(m['o'], min(m['r'], m['u'])));
			for (int i = 0; i < x; i++)
			{
				ans += "4";
				m['f']--;
				m['o']--;
				m['u']--;
				m['r']--;
			}

		}
		if (m.find('f') != m.end() and m.find('i') != m.end() and m.find('v') != m.end() and m.find('e') != m.end())
		{
			int x = min(m['f'], min(m['i'], min(m['v'], m['e'])));
			for (int i = 0; i < x; i++)
			{
				ans += "5";
				m['f']--;
				m['i']--;
				m['v']--;
				m['e']--;
			}

		}
		if ( m.find('x') != m.end())
		{
			int x = m['x'];
			for (int i = 0; i < x; i++)
			{
				ans += "6";
				m['s']--;
				m['i']--;
				m['x']--;

			}

		}
		if ( m.find('s') != m.end() and m.find('e') != m.end() and m.find('v') != m.end() and m.find('n') != m.end())
		{
			int x = min(m['s'], min(m['e'] / 2, min(m['v'], m['n'])));
			for (int i = 0; i < x; i++)
			{
				ans += "7";
				m['s']--;
				m['v']--;
				m['n']--;
				m['e'] -= 2;

			}

		}
		if ( m.find('t') != m.end() and m.find('e') != m.end() and m.find('i') != m.end() and m.find('g') != m.end() and m.find('h') != m.end())
		{
			int x = min(m['e'], min(m['i'], min(m['g'], min(m['h'], m['t']))));
			for (int i = 0; i < x; i++)
			{
				ans += "8";
				m['e']--;
				m['g']--;
				m['i']--;
				m['h']--;
				m['t']--;

			}

		}
		if ( m.find('n') != m.end() and m.find('e') != m.end() and m.find('i') != m.end())
		{
			int x = min(m['e'], min(m['i'], m['n'] / 2));
			for (int i = 0; i < x; i++)
			{
				ans += "9";
				m['n'] -= 2;

				m['i']--;

				m['e']--;

			}

		}
		return ans;
	}
};
int main() {
	string s = "fviefuroinen";
	Solution p;
	cout << p.originalDigits(s) << endl;
}