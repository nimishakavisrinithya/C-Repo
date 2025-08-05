class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0, m=0;
        int n= fruits.size();
        unordered_map<int,int>mpp;
        while(r<n){ 
            mpp[fruits[r]]++; 
            //r++; 
             while(mpp.size()==3){
                mpp[fruits[l]]--;
                 if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                 }
                l++;
             }
            m = max(m, r-l+1);
            r++;
        }
        return m;
    }
};