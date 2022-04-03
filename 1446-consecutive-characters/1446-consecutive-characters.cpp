class Solution {
public:
    int maxPower(string s) {
        int ret = 0;
        int cnt = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[i + 1]) {
                cnt++;
            }
            else {
                if (ret < cnt) {
                    ret = cnt;
                }
                cnt = 1;
            }
        }        
        return ret;
    }
};