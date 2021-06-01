#include <bits/stdc++.h>
using namespace std;
// void insert_in(vector<int>&v, int temp)
// {
// 	if (v.size() == 0 or temp >= v[v.size() - 1])
// 	{
// 		v.push_back(temp);
// 	}
// 	int val = v[v.size() - 1];
// 	v.pop_back();
// 	insert_in(v, temp);
// 	v.push_back(val);


// }
// void sort_vector(vector<int>& v)
// {

// 	//Base Case
// 	if (v.size() == 0)
// 	{
// 		return;
// 	}
// 	int temp = v[v.size() - 1];
// 	v.pop_back();
// 	sort_vector(v);
// 	insert_in(v, temp);


// }
void insert_vector(vector<int>& v, int temp)
{
	if (v.size() == 0 or temp >= v[v.size() - 1])
	{
		v.push_back(temp);
	}
	int val = v[v.size() - 1];
	v.pop_back();
	insert_vector(v, temp);
	v.push_back(val);

}
void sort_vector(vector<int>& v)
{
	if (v.size() == 1)
	{
		return;
	}
	int temp = v[v.size() - 1];
	v.pop_back();
	sort_vector(v);
	cout << temp << endl;
	insert_vector(v, temp);
}
int main() {
	int n;
	cin >> n;
	vector<int> v;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	// sort_vector(v);
	// for (auto i : v)
	// {
	// 	cout << i << " ";
	// }
	// return 0;
	sort_vector(v);
	for (auto x : v)
	{
		cout << x << " ";
	}


}