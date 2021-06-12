class Solution {
public:
	vector<vector<string>> suggestedProducts(vector<string>& products, string search) {
		sort(products.begin(), products.end());
		vector<vector<string>>ans;


		vector<bool>v(products.size(), true);

		for (int i = 0; i < search.length(); i++)
		{
			vector<string>str;
			char ch = search[i];
			int count = 0;
			for (int j = 0; j < products.size(); j++)
			{
				if (v[j] == true and products[j][i] == ch)
				{
					v[j] = true;
				}
				else
				{
					v[j] = false;
				}
				if (count < 3 and v[j] == true)
				{
					str.push_back(products[j]);
					count++;
				}
			}
			ans.push_back(str);


		}
		return ans;
	}
};