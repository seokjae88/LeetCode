class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> q;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2) {
                q.push_back(nums[i]);
            }
            else {
                q.push_front(nums[i]);
            }
        }
        vector<int> ret(q.begin(), q.end());
        return ret;
    }
};