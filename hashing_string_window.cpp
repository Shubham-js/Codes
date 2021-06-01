#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	//cout << s << endl;
	string str;
	getline(cin, str);
	int fs[256] = {0};
	int fp[256] = {0};
	int count = 0, start = 0, min_length = INT_MAX;
	int pl = str.length();
	if (pl > s.length())
	{
		cout << "No String" << endl;
		return 0;
	}
	int st_idx = -1;
	for (int i = 0; i < pl; ++i)
	{
		char ch = str[i];
		//cout << str[i] << endl;

		fp[ch]++;

	}
	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		fs[ch]++;

		if (fp[ch] != 0 and fs[ch] <= fp[ch])
		{
			count++;

		}
		if (count == pl)
		{
			char temp = s[start];
			while (fp[temp] == 0 or fs[temp] > fp[temp])
			{
				fs[temp]--;
				start++;
				temp = s[start];

			}
			//cout << start << endl;
			int window_length = i - start + 1;


			if (window_length < min_length)
			{
				min_length = window_length;
				st_idx = start;
			}

		}




	}
	if (st_idx == -1)
	{
		cout << "No String" << endl;
	}
	else {
		string ans = s.substr(st_idx, min_length);
		cout << ans << endl;
	}

	return 0;

}