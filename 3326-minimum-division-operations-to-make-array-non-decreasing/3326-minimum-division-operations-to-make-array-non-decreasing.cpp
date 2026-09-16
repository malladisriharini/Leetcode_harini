class Solution {
public:

 int smallestPrimeFactor(int x) {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return i;
            }
        }

        return x; 
    }

    int minOperations(vector<int>& nums) {
         int n = nums.size();
        int ans = 0;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] <= nums[i + 1])
                continue;
         int spf = smallestPrimeFactor(nums[i]);
            if (spf > nums[i + 1])
                return -1;
            nums[i] = spf;
            ans++;
        }

        return ans;

    }
};