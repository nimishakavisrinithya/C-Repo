class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c =1;
        int m =0;
        for(int i=0; i<n-1; i++){
        if(nums[i]==nums[i+1]) continue;
        else if((nums[i]+1) == nums[i+1]){
            c++;
            m = max(m,c);
        }
        else{
            cout<<c<<" ";
            c=1;
        }
        }
        if(n==0) return 0;
        if(m>0)
        return m;
        else return 1;
        
    }
};