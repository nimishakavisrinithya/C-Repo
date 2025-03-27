class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        if(mpp.empty()) return 1;
        int firstValue = mpp.begin()->second; 
        cout<<firstValue<<endl;
        for(const auto& pair : mpp){
            cout<<pair.second<<endl;
            if(pair.second!=firstValue) return 0;
        }
        return 1;
        
    }
};