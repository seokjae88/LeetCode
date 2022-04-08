class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2) {
                for (int j = i; j < nums.size(); j++) {
                    if ((nums[j] % 2) == 0) {
                        int tmp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = tmp;
                        break;
                    }
                    if (j == nums.size() - 1) {
                        return nums;
                    }
                }                
            }
        }
        return nums;
    }
};