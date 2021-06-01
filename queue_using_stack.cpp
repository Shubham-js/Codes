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

    while (s1.size() != 0)
    {
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(x);

    while (s2.size() != 0)
    {
      s1.push(s2.top());
      s2.pop();

    }
    cout << s1.top() << "Here" << endl;

  }
  void pop() {
    if (s1.size() == 0)
    {
      return;
    }

    s1.pop();

  }


  int front() {


    int ans = s1.top();

    s1.pop();




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
