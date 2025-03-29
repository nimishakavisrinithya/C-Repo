class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n1 = nums[nums.size()-1];
        int n2 = nums[nums.size()-2];
        cout<<n1<<endl<<n2;
        int k = (n1-1)*(n2-1);
        return k;
        
    }
};