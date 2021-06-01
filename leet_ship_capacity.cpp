class Solution {
public:

	int days_calc(int c, vector<int>w)
	{

		int i = 0;
		int cap = 0;
		int n = w.size();
		int days = 0;
		while (i < n)
		{
			if (cap + w[i] <= c)
			{
				cap += w[i];
			}
			else
			{
				days++;
				cap = 0;
				cap += w[i];
			}
			i++;
		}
		return days;

	}







	int shipWithinDays(vector<int>& w, int d) {
		int n = w.size();
		int c_low = 0, c_high = 0;
		for (int i = 0; i < n; i++)
		{
			c_high += w[i];
			c_low = max(c_low, w[i]);
		}
		c_low--;
		int c_req = 0;
		while (c_high - c_low > 1)
		{
			int c_mid = ((c_high - c_low) / 2) + c_low;
			int d_mid = days_calc(c_mid, w);
			if (d_mid < d)
			{
				c_high = c_mid;
			}
			else
			{
				c_low = c_mid;
			}

		}
		return c_high;
	}
};