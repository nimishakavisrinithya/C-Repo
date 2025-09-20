class Solution {
public:
vector<int>g;
int orof(vector<int>nums){
    int k=0;
        for(auto x : nums){
            k|=x;
        }
        return k;
}
int cnt=0;
void sub(int idx, int ds, vector<int>nums, int n, int k){
    if(idx==n){
    if(ds==k) cnt++;
     return;
    }
    //pick
    sub(idx+1, ds|nums[idx], nums, n, k);
    //not pick
    sub(idx+1, ds, nums, n, k);
}
    int countMaxOrSubsets(vector<int>& nums) {
        int olo = orof(nums);
        int ds=0;
        sub(0,ds,nums,nums.size(),olo);
        return cnt;
    }
};