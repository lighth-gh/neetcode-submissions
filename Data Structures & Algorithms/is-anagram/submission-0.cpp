class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int n = s.size();
        unordered_map<char, int> cnts;
        unordered_map<char, int> cntt;
        for (int i = 0; i < n; i++) {
            cnts[s[i]]++;
        }
        for (int i = 0; i < n; i++) {
            cntt[t[i]]++;
        }
        for (auto x: cnts) {
            if (x.second != cntt[x.first]) return false;
        }
        for (auto x: cntt) {
            if (x.second != cnts[x.first]) return false;
        }
        return true;
    }
};
