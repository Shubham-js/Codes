#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		// if (s.length() % 2 != 0 or s.length() == 0)
		// {
		// 	cout << -1 << endl;
		// }
		//else
		//{
		int c = 0, d = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '0')
			{
				c++;
			}
		}
		d = s.length() - c;
		if (c == 0 or d == 0)
		{
			cout << -1 << endl;
			continue;
		}
		stack<char>st;
		st.push(s[0]);
		for (long long i = 1; i < s.length(); ++i)
		{
			if (st.empty() or st.top() == s[i])
			{
				st.push(s[i]);
			}
			else
			{
				st.pop();
			}
		}
		if (st.empty())
		{
			cout << 0 << endl;
		}
		else
		{
			if (st.size() % 2 == 0) {
				cout << st.size() / 2 << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		//}
	}
	return 0;
}



//or
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         string s;
//         cin >> s;

//         if(s.length()%2 != 0) cout << "-1" << endl;
//         else{
//             int cont_0=0,cont_1=0;
//             for(int i=0; i<s.length(); i++){
//                 if(s[i] == '0') cont_0++;
//             }
//             cont_1 = s.length()-cont_0;

//             if(cont_0 == 0 || cont_1==0){
//                 cout << "-1"<<endl;
//             }
//             else{
//                 int diff = abs(cont_1-cont_0);
//                  cout << diff/2<<endl;
//             }
//         }
//     }
//     return 0;
// }