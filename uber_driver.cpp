// We want to give incentives to driver. So we need to devise a mechanism to calculate these incentives.

// On the end of every trip, an Uber driver gets rating for the ride which is averaged per day. For a given period of days, the value of driver is computed as the sum of the rating of the days in the given period, multiplied by the least rating in that period.

// For example
// The average ratings for some 4 days are:

// 2, 1, 3, 4
// The the value of driver over these days is (2 + 1 + 3 + 4) * 1 = 10

// Let's create a hypothesis that the incentive calculated is proportional to the greatest value over any contiguous period in drivers days on Uber. Given driver's average ratings per day, return this greatest value.

// Example
// Input
// Given driver's ratings over 6 days:

// [3, 1, 6, 4, 5, 2]
// Output
// 60
// Explanation
// Then the period from day 3 to day 5, i.e. 6, 4, 5 has the greatest value, which is (6 + 4 + 5) * 4 = 60

// [execution time limit] 1 seconds (cpp)

// [input] array.integer ratings

// Array of integers. a[i] represents average integer rating on i'th day. Size of array <= 10^5. 0 <= a[i] <= 10^6.

// [output] integer64

// The greatest value of any contiguous period throughout whole period in given array.


// [3, 1, 6, 4, 5, 2] 60
// [0, 0, 1, 2, 0, 0] 4
// ratings: [22736, 6702, 3741, 16871, 1976, 8935, 10341, 31745, 22873, 27515, 24200, 20788, 32040, 30486, 13016, 23070, 3866, 113, 2426, 27999, 16926, 2631, 18317, 21420, 5099, 21513, 17676, 543]
// Expected Output:
// 3942381836

#include<bits/stdc++.h>
using namespace std;

long long greatestValueDays(vector<long long>v) {
	vector<long long>individual;
	for (auto p : v)
	{
		individual.push_back(p * p);
	}
	long long m = INT_MAX;
	long long ans = 0;
	long long cf = 0;
	long long val = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (cf == 0)
		{
			cf += v[i];
			ans = max(ans, individual[i]);
			m = v[i];
		}
		else
		{
			cf += v[i];
			m = min(m, v[i]);
			val = m * cf;
			if (val < individual[i])
			{
				cf = v[i];
				m = v[i];
				ans = max(ans, individual[i]);
			}
			else
			{
				ans = max(ans, val);
			}

		}

	}

	return ans;

}
int main() {
	vector<long long>v = {1, 3 , 6, 4, 3, 2};
	cout << greatestValueDays(v) << endl;
	return 0;

}