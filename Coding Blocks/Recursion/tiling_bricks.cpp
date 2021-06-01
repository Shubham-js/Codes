#include<bits/stdc++.h>
using namespace std;


// Give an area of N * 4 size and tiles of 1,4 and 4,1 size finding the number of ways we can arrange to fill the tiles.
int bricks(int n) {
	if (n <= 3)
	{
		return 1;
	}
	int vertical_placed = bricks(n - 1);
	int horizontal_placed = bricks(n - 4);
	return vertical_placed + horizontal_placed;
}
int main() {
	int n;
	cin >> n;
	cout << bricks(n) << endl;
}