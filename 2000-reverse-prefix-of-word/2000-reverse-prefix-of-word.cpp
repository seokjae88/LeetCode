class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ret = "";
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                for (int j = 0; j <= i; j++) {
                    ret.push_back(word[i - j]);
                }
                for (int j = (i + 1); j < word.size(); j++) {
                    ret.push_back(word[j]);
                }
                break;
            }
        }
        if (ret.size() > 0) {
            return ret;
        }
        else {
            return word;
        }
        
    }
};