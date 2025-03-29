class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       unordered_map<int, int>frq;
        int k = diff;
       for(int x : nums) frq[x] =1;
        int c=0;
        for(int i=0; i<nums.size(); i++){
            int q = nums[i]+k;
            if(frq.count(q)!=0 && frq.count(q+k)!=0) c++;
        }
        return c;
    }
};