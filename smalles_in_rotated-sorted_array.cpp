class Solution {
public:
    int findMin(vector<int>&v) {
        if (v.size() == 1)
        {
            return v[0];
        }
        //find the minimum index which is the number of time the array was rotated.
        if (v[0] < v[v.size() - 1])
        {   //already sorted array
            return v[0];
        }
        int n = v.size();
        int start = 0, end = v.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int prev = (mid + n - 1) % n;
            int next = (mid + 1) % n;
            if (v[mid] <= v[prev] and v[mid] <= v[next])
            {
                return v[mid];
            }
            //find sorted or unsorted part
            else if (v[0] <= v[mid])
            {
                start = mid + 1;
            }
            else if (v[mid] <= v[n - 1])
            {
                end = mid - 1;
            }
        }

        return v[start];
    }
};