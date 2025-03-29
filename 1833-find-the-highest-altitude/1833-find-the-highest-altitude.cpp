class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>hi;
        hi.emplace_back(0);
        hi.emplace_back(gain[0]);
        for(int i=0; i<gain.size()-1; i++){
            int k = gain[i]+ gain[i+1];
            gain.erase(gain.begin() + (i + 1));
            gain.insert(gain.begin()+i+1,k);
            hi.emplace_back(k);
        }
       return *max_element(hi.begin(), hi.end());
    }
};