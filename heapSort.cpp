#include<iostream>
#include<vector>
using namespace std;

void heapify(int idx, vector<int>&v, int size)
{
	int left = idx * 2;
	int right = left + 1;
	int min_idx = idx;
	int last = size - 1;
	if (left <= last and v[min_idx] < v[left])
	{
		min_idx = left;
	}
	if (right <= last and v[min_idx] < v[right])
	{
		min_idx = right;
	}
	if (min_idx != idx)
	{
		swap(v[idx], v[min_idx]);
		heapify(min_idx, v, size);
	}
}




void create_Heap(vector<int>&v) {
	for (int i = (v.size() - 1) / 2; i > 0; i--)
	{
		heapify(i, v, v.size());
	}
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}
void sort_Heap(vector<int>&v)
{	create_Heap(v);
	int n = v.size();
	while (n > 1)
	{

		swap(v[1], v[n]);

		n--;
		heapify(1, v, n);

	}
}
int main() {
	int n;
	cin >> n;
	vector<int>v;
	v.push_back(-1);
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort_Heap(v);
	for (auto i : v)
	{
		cout << i << " ";
	}
	return 0;

}