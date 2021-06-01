#include<bits/stdc++.h>


using namespace std;
#define ll long long int



void buildSegmentTree(int* a, int* st, int start, int end, int pos)
{
	if (start > end)
		return;
	else if (start == end)
	{
		st[pos] = start;
	}
	else {
		int mid = (end - start) / 2 + start;
		buildSegmentTree(a, st, start, mid, 2 * pos + 1);
		buildSegmentTree(a, st, mid + 1, end, 2 * pos + 2);
		// st[pos] = min(a[st[2 * pos + 1]], a[st[2 * pos + 2]]);
		int lv = st[2 * pos + 1];
		int rv = st[2 * pos + 2];
		st[pos] = a[lv] < a[rv] ? lv : rv;

	}
}
int getMinIndex(int* a, int* st, int start, int end, int qs, int qe, int pos)
{
	if (qe < start || qs > end)
		return -1;
	else if (qs <= start and qe >= end)
		return st[pos];
	else {
		int mid = (end - start) / 2 + start;
		int lv = getMinIndex(a, st, start, mid, qs, qe, 2 * pos + 1);
		int rv = getMinIndex(a, st, mid + 1, end, qs, qe, 2 * pos + 2);
		if (lv == -1 && rv != lv )
			return rv;
		else if (rv == -1 && rv != lv)
			return lv;
		else
			return a[lv] < a[rv] ? lv : rv;
	}
}

int getLargestRectangle(int* a, int* st, int l, int r, int  n)
{
	if (l <= r)
	{
		int min_index = getMinIndex(a, st, 0, n, l, r, 0);
		int area = (r - l + 1) * a[min_index];
		return max(area, max(
		               getLargestRectangle(a, st, l, min_index - 1, n),
		               getLargestRectangle(a, st, min_index + 1,  r, n)));
	}
	else
		return INT_MIN;
}
int main() {
	int n;
	cin >> n;

	int a[n];
	int st[4 * n] = { -1};

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	buildSegmentTree(a, st, 0, n - 1, 0);

	//  for (int i = 0; i < 4*  n; ++i)
	// {
	//     cout << st[i]<< " " ;
	// }
	cout << getLargestRectangle(a, st, 0, n - 1, n - 1);

	return 0;

}
