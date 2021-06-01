#include<iostream>
using namespace std;
class queue {
//public:
	int f, r, ms, cs;
	int*a;
public:
	queue(int ds = 5)
	{
		ms = ds;
		f = 0;
		r = ms - 1;
		cs = 0;
		a = new int[ms];
	}

	bool full()
	{
		return cs == ms;
	}
	bool empty()
	{
		return cs == 0;
	}
	void push (int data)
	{
		if (!full())
		{
			r = (r + 1) % ms;
			a[r] = data;
			cs++;
		}
	}

	void pop() {
		if (!empty())
		{
			f = (f + 1) % ms;
			cs--;
		}

	}
	int front()
	{
		return a[f];
	}
};

int main() {
	queue q;
	for (int i = 1; i < 6; ++i)

	{
		q.push(i);/* code */
	}
	// while (!q.empty())
	// {
	// 	cout << q.front() << " ";
	// 	q.pop();
	// }
	// cout << endl;

	q.pop();
	q.pop();
	q.push(7);
	cout << q.front() << endl;
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}