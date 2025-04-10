class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> x;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                x.push(i);
            if (s[i] == ')') {
                reverse(s.begin() + x.top() + 1, s.begin() + i);
                // s.erase(i,1);
                // s.erase(x.top(),1);
                x.pop();

                //  x.top()= x.top()-2;
            }
        }
        for (int i = 0; i < s.size(); ){
            if (s[i] == '(' || s[i] == ')') {
                s.erase(s.begin() + i);
            }
            else i++;
        }
        return s;
    }
};