#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, q;
	vector < pair<int, int> >v; //first for distance from town second for nax fueling capacity of station
	cin >> t;
	while (t--)
	{
		cin >> q;
		int d, f;
		for (int i = 0; i < q; ++i)
		{
			cin >> d >> f;
			v.push_back({d, f});
		}
		int town, fuel; //distance of town from truck and initial fuel filled in truck
		cin >> town >> fuel;

	}
}