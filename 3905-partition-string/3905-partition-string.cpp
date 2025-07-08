class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string> vec;
        unordered_map<string, int> m;
        int i = 0;
        string k(1, s[0]);
        while (i + 1 <= s.length()) {
            if (m.find(k) == m.end()) {
                m[k]++;
                vec.push_back(k);
                i++;
                k = string(1, s[i]);
            } else {
                k += s[i + 1];
                i++;
            }
        }
         return vec;
    }
    };