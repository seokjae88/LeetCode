class Solution {
public:
    int oddMove(int n, int start, std::vector<int>& nums) {
        for (int i = start; i < nums.size(); i++) {
            if (nums[i] % 2) {
                return oddMove(n, i + 1, nums);
            }
            else {
                int tmp = nums[i];
                nums[i] = n;
                return tmp;
            }
        }
        return -1;
    }
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2) {
                int n = oddMove(nums[i], i + 1, nums);
                if (n == -1) {
                    return nums;
                }
                nums[i] = n;
            }
        }
        return nums;
    }
};