class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
       if(nums[0]<0 && nums[nums.size()-1]<0) return -1;
        if(nums[0]>0 && nums[nums.size()-1]>0) return -1;
        for(int i=0; nums[i]<=0; i++){
            int j= nums.size()-1;
        while(nums[j]>=0){
            if(nums[j]*(-1)==nums[i]) return nums[j];
            j--;
        }
        }
        return -1;
    }
};