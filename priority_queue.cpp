#include<iostream>
#include<queue>
#include <cstring>
using namespace std;

// int main() {
// 	priority_queue < int, vector<int>, greater<int>>pq;//default comparator is max heap to conver to mon heap we can use the default comparator
// 	int n;
// 	cin >> n;
// 	int temp;
// 	while (n--)
// 	{
// 		cin >> temp;
// 		pq.push(temp);
// 	}
// 	while (!pq.empty())
// 	{
// 		cout << pq.top() << endl;
// 		pq.pop();
// 	}
// 	return 0;

// }

//   custom class comparator for priority queue


class pension {
public:
	string name;
	int age;
	pension() {

	}
	pension(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};
class ageCompare {
public:
	bool operator()(pension a, pension b)
	{
		return a.age < b.age;
	}
};
int main() {
	priority_queue<pension, vector<pension>, ageCompare>pq;
	int n;
	cin >> n;
	string name;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> a;
		pension pa(name, a);
		pq.push(pa);
	}
	while (!pq.empty())
	{
		pension p = pq.top();
		cout << p.name << " " << p.age << endl;
		pq.pop();
	}
}

