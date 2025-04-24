class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>vec(nums.size());
        int i=0;
        int j=nums.size()-1;
        for(int x : nums){
            if(x%2==0) vec[i++] = x;
            else vec[j--] = x;
        }
       return vec;
    }
};