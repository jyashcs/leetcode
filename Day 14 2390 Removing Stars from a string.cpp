class Solution {
public:
    string removeStars(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '*') {
                if (!stack.empty()) {
                    stack.pop();
                }
            } else {
                stack.push(c);
            }
        }
        string result;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};