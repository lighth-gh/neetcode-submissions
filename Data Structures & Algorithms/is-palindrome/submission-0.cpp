class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
                clean += s[i];
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                clean += s[i];
            } else if (s[i] >= '0' && s[i] <= '9') {
                clean += s[i];
            } else if (s[i] == ' ') {
                continue;
            }
        }
        long long n;
        if (clean.size() % 2 == 0) n = clean.size() / 2;
        else n = clean.size() / 2 - 1;

        for (int i = 0; i <= n; i++) {
           if (clean[i] != clean[clean.size() - i - 1]) return false;
        }
        return true;
    }
};