class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int low = 0;
        int high = nums.size()-1;
        int n = nums.size();
        if(n==1) return 0;
        while(low<=high){
            int mid = (low + high)/2;
            if(mid==n-1){
                if(nums[mid-1]>=nums[mid]) high = mid-1;
                else low = mid+1;
            }
            else if(nums[mid]<=nums[mid+1]) low = mid+1;
            else high = mid-1;
        }
        if(low==n) return n-1;
        return low;
    }
};