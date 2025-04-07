class Solution {
public:
    string sortSentence(string s) {
        string str;
        int k = 0, c = 0;
        string res[20];

        for (int i = 0; i < s.size(); i++) {
            c++;
            if (s[i] == ' ' || i == s.size() - 1) {
                str = s.substr(k, c - (i == s.size() - 1 ? 0 : 1));
                int pos = s[i == s.size() - 1 ? i : i - 1] - '0';
                str.pop_back();
                res[pos] = str;
                k = i + 1;
                c = 0;
            }
        }

        string temp;
        for (int i = 1; i <10 ; i++) {
            if (res[i] != "") {
                if (!temp.empty()) temp += " ";
                temp += res[i];
            }
        }
        return temp;
    }
};
