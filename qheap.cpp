#include<bits/stdc++.h>
using namespace std;
class Heap {
	vector<int>v;
	void heapify(int idx)
	{
		int left = 2 * idx;
		int right = left + 1;
		int min_idx = idx;
		int last = v.size() - 1;
		if (left <= last and v[idx] > v[left])
		{
			min_idx = left;
		}
		if (right <= last and v[min_idx] > v[right])
		{
			min_idx = right;
		}
		if (min_idx != idx)
		{
			swap(v[idx], v[min_idx]);
			heapify(min_idx);
		}
	}

public:
	Heap(int size = 100)
	{
		v.reserve(size);
		v.push_back(-1);//oth index is not used by me.
	}
	void push(int d)
	{
		v.push_back(d);
		int index = v.size() - 1;
		int parent = index / 2;
		while (index > 1 and v[parent] > v[index])
		{
			swap(v[index], v[parent]);
			index = parent;
			parent /= 2;
		}
	}
	int top() {
		return v[1];
	}
	void pop(int d)
	{
		int idx = 0;
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i] == d)
			{
				idx = i;
			}
		}
		swap(v[idx], v[v.size() - 1]);
		v.pop_back();
		heapify(idx);
	}
};
int main() {
	Heap h;
	int n, q, p;
	cin >> n;
	while (n--)
	{
		cin >> q;
		if (q == 1)
		{
			cin >> p;
			h.push(p);
		}
		else if (q == 2)
		{
			cin >> p;
			h.pop(p);
		}
		else
		{
			cout << h.top() << endl;
		}
	}

}