#include<bits/stdc++.h>
using namespace std;
class Heap {
	vector<int>v;
	bool minHeap;
	bool compare(int a, int b)
	{
		if (minHeap)
		{
			return a < b;
		}
		else
		{
			return a > b;
		}
	}
	void heapify(int idx)
	{
		int left = 2 * idx;
		int right = left + 1;
		int min_idx = idx;

		int last = v.size() - 1;
		if (left <= last and compare(v[left], v[min_idx]))
		{
			min_idx = left;
		}
		if (right <= last and compare(v[right], v[min_idx]))
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
	Heap(int size = 10, bool type = true)
	{
		v.reserve(size);
		v.push_back(-1);
		minHeap = type;
	}
	void push(int d)
	{
		v.push_back(d);
		int idx = v.size() - 1;
		int parent = idx / 2;
		while (idx > 1 and compare(v[idx], v[parent]))
		{
			swap(v[idx], v[parent]);
			idx = parent;
			parent = parent / 2;
		}

	}
	int top()
	{
		return v[1];
	}
	void pop() {
		int last = v.size() - 1;
		swap(v[1], v[last]);
		v.pop_back();
		heapify(1);
	}
	bool empty()
	{
		return v.size() == 1;
	}
	void buildHeap_from_array1(int *a, int n) //o(nlogn)
	{
		for (int i = 2; i < n; ++i)
		{
			int idx = i;
			int parent = idx / 2;
			while (idx > 1 and compare(a[idx], a[parent]))
			{
				swap(a[idx], a[parent]);
				idx = parent;
				parent = parent / 2;
			}
		}
	}
};

int main() {

	int n;
	cin >> n;
	Heap h(n + 1);
	int x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		h.push(x);
	} while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}
	int a[] = { -1, 6, 8, 4, 2, 9, 3};
	int s = sizeof(a) / sizeof(int);

	h.buildHeap_from_array1(a, s);
	for (int i = 1; i < 7; ++i)
	{
		cout << a[i] << " ";
	}


	return 0;
}
