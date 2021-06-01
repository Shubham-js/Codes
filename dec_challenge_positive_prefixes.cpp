#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	int n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (n == k)
		{
			for (int i = 0; i < n; ++i)
			{
				cout << (i + 1) << " ";

			}
			cout << endl;
		}
		else
		{
			int a[n]; int p = 0;
			if (n & 1)
			{
				for (int i = 0; i < n; ++i)
				{
					a[i] = (i + 1) * pow(-1, i + 2);
				}

			}
			else
			{
				for (int i = 0; i < n; ++i)
				{
					a[i] = (i + 1) * pow(-1, i + 1);
				}
			}

			int sum = 1, count, diff = 0;
			count = ceil((double)n / 2);
			for (int i = 1; i < n; ++i)
			{
				sum += a[i];
				if (sum > 0)
				{
					if (count < k)
					{
						diff = k - count;
						for (int j = n - 1; j >= 0; j--)
						{
							if (a[j] < 0)
							{
								a[j] = a[j] * -1;
								count++;

								if (count == k)
								{
									break;
								}
							}

						}


					}
					else if (count > k)
					{
						diff = count - k;
						for (int j = n - 1; j >= 0; j--)
						{
							if (a[j] > 0)
							{
								a[j] = a[j] * -1;
								count--;

								if (count == k)
								{
									break;
								}
							}

						}
					}



				}



			}

			for (int i = 0; i < n; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}