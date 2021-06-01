#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		int n1 = num1.length();
		int n2 = num2.length();
		vector<int> prod(n1 + n2, 0);

		for (int j = n2 - 1 ; j >= 0 ; j--) {
			for (int i = n1 - 1; i >= 0; i--) {
				int product =  (num1[i] - '0') * (num2[j] - '0');  // product of digits
				int temp = prod[i + j + 1] + product;
				prod[i + j + 1] = temp % 10;  // update digit at index i+j+1
				prod[i + j]  = prod[i + j] + temp / 10; // forward carry to i+j
			}
		}
		bool seen = false;
		string result = "";
		for (char p : prod) {
			if (p + '0' == '0' && !seen) continue;
			result += p + '0';
			seen = true;
		}
		return result.length() ?  result : "0";

	}
};
int main() {
	string s1 = "123";
	string s2 = "456";
	Solution s;
	cout << s.multiply(s1, s2) << endl;
	return 0;
}