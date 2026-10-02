class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            // Opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }

            // Closing bracket
            else {

                // No opening bracket available
                if (st.empty()) {
                    return false;
                }

                // Check matching pair
                if (s[i] == ')' && st.top() != '(') {
                    return false;
                }

                if (s[i] == '}' && st.top() != '{') {
                    return false;
                }

                if (s[i] == ']' && st.top() != '[') {
                    return false;
                }

                // Matching bracket found
                st.pop();
            }
        }

        // Stack must be empty
        return st.empty();
    }
};