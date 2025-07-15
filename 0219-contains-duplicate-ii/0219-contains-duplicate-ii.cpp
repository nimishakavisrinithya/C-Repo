class Solution {
public:
int fun(vector<int>nums, int l, int k){
    int n=nums.size();
    int b =nums[l]; 
    for(int i=l+1; i<n; i++){
        if(nums[i]==b){
            if(abs(i-l)<=k) return 1;
        }
    }
    return 0;
}
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        int n = nums.size();
        for(int i=0; i<n; i++) m[nums[i]]++;
        int l=0, r=0;
        while(l<n){
            if(m[nums[l]]>1 && fun(nums, l, k)) return 1;
            l++;
        }
        return 0;
    }
};