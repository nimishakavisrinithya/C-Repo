class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>tar;
        int c=0;
        for(int i=0; i<nums.size()-1; i+=2){
            for(int j=0; j<nums[i]; j++){
                tar.insert(tar.begin()+c, nums[i+1]);
                c++;
            }
        }
        return tar;
    }
};