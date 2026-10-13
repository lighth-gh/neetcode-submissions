class Solution {
public:
    bool isValid(char c) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))  {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            // Nếu s[l] không hợp lệ:
            // l++ và continue
            if (!isValid(s[l])) {
                l++;
                continue;
            }
            // Nếu s[r] không hợp lệ:
            // r-- và continue
            if (!isValid(s[r])) {
                r--;
                continue;
            }
            // So sánh hai ký tự sau khi
            // chuyển thành chữ thường
            if (isValid(s[l]) && isValid(s[r])) {
                if (s[l] >= 'A' && s[l] <= 'Z') {
                    s[l] = s[l] - 'A' + 'a';
                }
                if (s[r] >= 'A' && s[r] <= 'Z') {
                    s[r] = s[r] - 'A' + 'a';
                }
                // Nếu khác nhau: return false
                if (s[l] != s[r]) return false;
                // Nếu giống nhau:
                // l++, r--
                else {
                    l++;
                    r--;
                }
            }
        }
        return true;
    }
};