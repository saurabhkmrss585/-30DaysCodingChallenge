class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            // If it's an opening bracket, push it to the stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } 
            else {
                // If stack is empty, there's no corresponding opening bracket
                if (stk.empty()) {
                    return false;
                }
                char top = stk.top();
                // Check if the closing bracket matches the top of the stack
                if ((s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '[')) {
                    stk.pop();
                } 
                else {
                    return false;
                }
            }
        }
        // If the stack is empty, all brackets were properly matched
        return stk.empty();
    }
};