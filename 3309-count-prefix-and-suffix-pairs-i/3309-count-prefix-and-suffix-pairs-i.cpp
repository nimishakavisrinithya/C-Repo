class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int c = 0;
        for (int i = 0; i < words.size(); i++) {
            for(int j = i+1; j<words.size(); j++){
            if (words[i].size() > words[j].size())
                continue;
            string str =
                words[j].substr(words[j].size() - words[i].size());
            if (words[j].find(words[i]) == 0 && str == words[i]){
                c++;
                cout<<i<<' ';
            }
          }
        }
        return c;
    }
};