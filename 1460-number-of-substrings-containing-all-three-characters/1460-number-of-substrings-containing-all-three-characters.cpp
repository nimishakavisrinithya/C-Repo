class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int l = 0, r = 0, c = 0;
        unordered_map<char, int> mpp;

        while (r < n) {
            mpp[s[r]]++;

            while (mpp.size() == 3) {
                // If we have all 3 chars, add substrings starting at l
                c += (n - r);

                // shrink from left
                mpp[s[l]]--;
                if (mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
            r++;
        }
        return c;
    }
};
