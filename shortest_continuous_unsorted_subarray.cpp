class Solution {
public:
    int findUnsortedSubarray(vector<int>& v) {
        vector<int>x(v);
        sort(x.begin(), x.end());
        int i = 0; int j = x.size() - 1;
        int a = INT_MIN, b = INT_MAX;
        bool flag = false;
        while (i <= j)
        {
            if (v[i] != x[i])
            {
                a = i;
            }
            else
            {
                i++;
            }
            if (v[j] != x[j])
            {
                b = j;

            }
            else
            {
                j--;
            }
            if (a != INT_MIN and b != INT_MAX)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            return b - a + 1;
        }
        return 0;


    }
};
//Approach 2(using stack) in java
public class Solution {
    public int findUnsortedSubarray(int[] nums) {
        Stack < Integer > stack = new Stack < Integer > ();
        int l = nums.length, r = 0;
        for (int i = 0; i < nums.length; i++) {
            while (!stack.isEmpty() && nums[stack.peek()] > nums[i])
                l = Math.min(l, stack.pop());
            stack.push(i);
        }
        stack.clear();
        for (int i = nums.length - 1; i >= 0; i--) {
            while (!stack.isEmpty() && nums[stack.peek()] < nums[i])
                r = Math.max(r, stack.pop());
            stack.push(i);
        }
        return r - l > 0 ? r - l + 1 : 0;
    }
}


// Approach 3 (best one)


public class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        boolean flag = false;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i - 1])
                flag = true;
            if (flag)
                min = Math.min(min, nums[i]);
        }
        flag = false;
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1])
                flag = true;
            if (flag)
                max = Math.max(max, nums[i]);
        }
        int l, r;
        for (l = 0; l < nums.length; l++) {
            if (min < nums[l])
                break;
        }
        for (r = nums.length - 1; r >= 0; r--) {
            if (max > nums[r])
                break;
        }
        return r - l < 0 ? 0 : r - l + 1;
    }
}



