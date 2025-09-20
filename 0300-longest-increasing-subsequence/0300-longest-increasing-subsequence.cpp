class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        vector<int>arr(nums.size(), 1);
        for(int i=0; i<n; i++){
            int k=0;
         for(int j=0; j<i; j++){
         if(nums[j]<nums[i]){
            if(k<arr[j]) k = arr[j];
         }
         }
         arr[i] = 1+k;
         if(l<arr[i]) l = arr[i];
        }
        return l;
    }
};