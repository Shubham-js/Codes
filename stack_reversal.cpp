#include<bits/stdc++.h>
using namespace std;
void reverse_stack(stack<int>s)
{
	if (s.size() == 0)
	{
		return;
	}

	int x = s.top();
	s.pop();
	reverse_stack(s);
	cout << x << endl;




}
int main() {
	int n;
	cin >> n;
	stack<int>st;
	int x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		st.push(x);
	}

	reverse_stack(st);


	return 0;
}