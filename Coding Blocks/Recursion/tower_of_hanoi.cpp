#include<bits/stdc++.h>
using namespace std;
void move(int n, char Source, char Helper, char Destination)
{
	// if (n == 1)
	// {
	// 	cout << "Shift " << 1 << " disc from " << Source << " to " << Destination << endl;
	// 	return;
	// } or we ca use
	if (n == 0)
	{
		return;
	}
	move(n - 1, Source, Destination, Helper);
	//cout << "Shift " << n << " disc from " << Source << " to " << Destination << endl;
	cout << "Moving ring " << n << " from " << Source << " to " << Destination << endl;

	move(n - 1, Helper, Source, Destination);
}
int main() {
	int n;
	cin >> n;
	move(n, 'A', 'B', 'C');
}