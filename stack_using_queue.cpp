#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;



class Queue {
  stack<int>s1, s2;
public:
  void push(int x)
  {
    s1.push(x);
  }
  void pop() {
    if (s1.size() == 0)
    {
      return;
    }
    while (s1.size() != 1) {
      s2.push(s1.top());
      s1.pop();
    }
    s1.pop();
    swap(s1, s2);
  }


  int front() {
    if (s1.size() == 0)
    {
      return -1;
    }
    while (s1.size() != 1) {
      s2.push(s1.top());
      s1.pop();
    }
    int ans = s1.top();
    s2.push((s1.top()));
    s1.pop();
    swap(s1, s2);
    return ans;
  }
};
int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  Queue q;
  int t;
  cin >> t;
  while (t--)
  {
    int ch;
    cin >> ch;
    switch (ch) {
    case 1: {
      int n;
      cin >> n;
      q.push(n);

      break;
    }
    case 2: {
      q.pop();
      break;
    }
    case 3:
      cout << q.front() << endl;
      break;
    }
  }
  return 0;
}
