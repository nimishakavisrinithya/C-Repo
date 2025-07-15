class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i = 0, l = 0, r = 0;
        string str;
        unordered_map<string, int> m;
        vector<string>v;
         if (s.length() < 10){
           
            return v;
         }
        while (i < 10) {
            str += s[i];
            i++;
            r++;
        }
        while (r <= s.size()) {
            cout<<str+" ";
            // if (m.find(str) != m.end() && mpp[str]==0) {
            //     v.push_back(str);
            //     mpp[str]++;
            //    // cout << "---"+str + " ";
            // }
            //cout<<str+" ";
            m[str]++;
            str.erase(0,1);
            //cout<<str+" ";
           // l++;
            // r++;
            str += s[r]; //
            r++;
        }
        for(auto i : m){
            cout<<i.second;
            if(i.second>1) v.push_back(i.first);
        }
        return v;
    }
};