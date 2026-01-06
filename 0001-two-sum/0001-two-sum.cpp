class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>m;
        int i =0, j=1;
        int n = nums.size();
        while(i<n){
            if(j<n){
            if(nums[i]+nums[j]==target){
            m.push_back(i);
            m.push_back(j);
            i++;
            j= i+1;
            }
            else j++;
            }
            else{
                i++;
                j=i+1;
            }
        }
        return m;
    }
};