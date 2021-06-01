class Solution {
public:
	bool isPowerOfThree(int n) {
		if (n <= 0) return false;
		float log3_n = (log(n) / log(3.0));
		return log3_n == floor(log3_n) && n == (int)pow(3, log3_n);
	}
};