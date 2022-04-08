class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2) {
                ret.push_back(nums[i]);
            }
            else {
                ret.insert(ret.begin(), nums[i]);
            }
        }
        return ret;
    }
};