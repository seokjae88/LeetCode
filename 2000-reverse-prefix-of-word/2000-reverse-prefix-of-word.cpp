class Solution {
public:
    string reversePrefix(string word, char ch) {
        std::vector<char> input;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                for (int j = 0; j <= i; j++) {
                    input.push_back(word[i - j]);
                }
                for (int j = (i + 1); j < word.size(); j++) {
                    input.push_back(word[j]);
                }
                break;
            }
        }
        if (input.size() > 0) {
            string ret(input.begin(), input.end());
            return ret;
        }
        else {
            return word;
        }
    }
};