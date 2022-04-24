class Solution {
    public int slidingWindow(int window, int[] nums) {
        int start = 0;
        int end = 0;
        int sum = 0;
        int ret = 0;
        int cnt = 0;

        while(end <= nums.length) {
            if (sum < window) {
                if (nums.length > end) {
                    sum += nums[end];
                }
                end++;
                cnt++;
            }
            if (sum > window) {
                sum -= nums[start];
                start++;
                cnt--;
            }
            if (sum == window) {
                if (ret < cnt) {
                    ret = cnt;
                }
                sum -= nums[start];
                start++;
                cnt--;
            }
        }
        return ret;
    }

    public int sumValues(int[] nums) {
        int sum = 0;

        for (int v : nums)
            sum += v;

        return sum;
    }

    public int minOperations(int[] nums, int x) {
        int sum = sumValues(nums);
        if (sum < x) {
            return -1;
        }
        if (sum == x) {
            return nums.length;
        }

        int window = sum - x;

        int ret = slidingWindow(window, nums);
        if (ret <= 0) {
            return -1;
        } else {
            return nums.length - ret;
        }
    }
}