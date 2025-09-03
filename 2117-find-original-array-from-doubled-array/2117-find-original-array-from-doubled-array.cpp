class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       vector<int>vec;
       int n = changed.size();
       if(n%2!=0) return vec;
      map<int,int>mpp;
       sort(changed.begin(), changed.end());
       for(int i=0; i<n; i++) mpp[changed[i]]++;
       for(int i=0; i<n; i++){
        if(mpp[changed[i]]==0) continue;
        if(mpp[2*changed[i]]==0) return {};
        vec.push_back(changed[i]);
        mpp[changed[i]]--;
        mpp[2*changed[i]]--;
       }
       return vec;
    }
};