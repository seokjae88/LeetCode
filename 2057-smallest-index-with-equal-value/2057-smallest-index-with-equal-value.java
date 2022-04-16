class Solution {
    public int smallestEqual(int[] nums) {
        if (nums.length <= 10) {
            for (int i=0; i < nums.length; i++) {
                if (i == nums[i]) {
                    return i;
                }
            }
        } else {
            for (int i=0; i < 10; i++) {
                if (i == nums[i]) {
                    return i;
                }
            }
            for (int i=10; i < nums.length; i++) {
                if ((i % 10) == nums[i]) {
                    return i;
                }
            }
        }
        return -1;
    }
}