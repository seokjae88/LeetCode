class Solution {
    public int minStartValue(int[] nums) {
        int min = 1;
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            if (min > sum) {
                min = sum;
            }
        }

        if (min < 0) {
            return (min * -1) + 1;
        }
        return min;
    }
}