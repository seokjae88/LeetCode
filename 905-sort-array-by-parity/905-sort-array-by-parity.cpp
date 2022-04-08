class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2) {
                bool isExistEven = false;
                for (int j = i; j < nums.size(); j++) {
                    if ((nums[j] % 2) == 0) {
                        int tmp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = tmp;
                        isExistEven = true;
                        break;
                    }   
                }
                if (isExistEven == false) {
                    break;
                }
            }
        }
        return nums;
    }
};