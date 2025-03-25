class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxval = INT_MIN;
        for(int i : nums){
            sum+=i;
            maxval = std::max(maxval, sum );
            if(sum<0) sum=0;
        }
        return maxval;
    }
};