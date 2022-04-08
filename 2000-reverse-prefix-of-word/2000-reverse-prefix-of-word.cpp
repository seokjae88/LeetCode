class Solution {
public:
    void reverseStr(string& str, int start, int end)
    {
        while (start < end)
        {
            int temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
    string reversePrefix(string word, char ch) {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                reverseStr(word, 0, i);
                break;
            }
        }
        return word;
    }
};