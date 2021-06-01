#include<bits/stdc++.h>
using namespace std;

//Method 1

// class Solution {
// public:
// 	string intToRoman(int n) {
// 		vector<pair<string, int>>v = {{"I", 1}, {"IV", 4}, {"V", 5}, {"IX", 9}, {"X", 10}, {"XL", 40}, {"L", 50},
// 			{"XC", 90}, {"C", 100}, {"CD", 400},{"D",500}, {"CM", 900}, {"M", 1000}
// 		};
// 		string st = "";

// 		for (int i = 11; i >= 0; i--)
// 		{
// 			if (n >= v[i].second)
// 			{

// 				int x = n / v[i].second;

// 				while (x--)
// 					st += v[i].first;
// 				n = n % v[i].second;
// 			}
// 		}
// 		return st;


// 	}
// };

//Method 2
class Solution {
public:
	string intToRoman(int num) {
		if (num <= 0)
			return "";
		if (num < 4) return "I" + intToRoman(num - 1);
		if (num == 4) return "IV" + intToRoman(num - 4);
		if (num <= 8) return "V" + intToRoman(num - 5);
		if (num == 9) return "IX" + intToRoman(num - 9);
		if (num < 40) return "X" + intToRoman(num - 10);
		if (num < 50) return "XL" + intToRoman(num - 40);
		if (num < 90) return "L" + intToRoman(num - 50);
		if (num < 100) return "XC" + intToRoman(num - 90);
		if (num < 400) return "C" + intToRoman(num - 100);
		if (num < 500) return "CD" + intToRoman(num - 400);
		if (num < 900) return "D" + intToRoman(num - 500);
		if (num < 1000) return "CM" + intToRoman(num - 900);
		else return "M" + intToRoman(num - 1000);;
	}
};
int main()
{
	int n;
	cin >> n;
	Solution s;
	cout << s.intToRoman(n) << endl;
	return 0;
}