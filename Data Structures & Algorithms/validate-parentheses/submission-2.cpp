class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
                if (i == s.size() - 1) return false;
            } else if (s[i] == ')') {
                if (st.empty()) return false;
                char check = st.top();
                st.pop();
                if (check == '(') continue;
                else return false;
            } else if (s[i] == ']') {
                if (st.empty()) return false;
                char check = st.top();
                st.pop();
                if (check == '[') continue;
                else return false;
            } else if (s[i] == '}') {
                if (st.empty()) return false;
                char check = st.top();
                st.pop();
                if (check == '{') continue;
                else return false;
            }
        }
        return st.empty();
    }
};
