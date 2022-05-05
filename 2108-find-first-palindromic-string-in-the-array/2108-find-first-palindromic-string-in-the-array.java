class Solution {
    public String firstPalindrome(String[] words) {
        for (String word : words) {
            boolean palindromic = true;
            for (int i = 0, j = (word.length() - 1); i <= j; i++, j--) {
                if (word.charAt(i) != word.charAt(j)) {
                    palindromic = false;
                    break;
                }
            }
            if (palindromic) {
                return word;
            }
        }
        return "";
    }
}