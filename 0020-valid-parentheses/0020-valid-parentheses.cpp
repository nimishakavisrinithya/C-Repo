class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.size() % 2 != 0)
            return 0;
        for (auto x : s) {
            cout << x << ' ';
            if (x == '(' || x == '[' || x == '{')
                st.push(x);
            else if (st.empty())
                return 0;
            else if ((x == ')' && st.top() == '(') ||
                     (x == ']' && st.top() == '[') ||
                     (x == '}' && st.top() == '{'))
                st.pop();
            else
                return 0;
        }
        return st.empty();
    }
};