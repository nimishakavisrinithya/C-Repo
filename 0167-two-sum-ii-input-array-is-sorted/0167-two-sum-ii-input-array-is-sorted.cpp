class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>vec(2);
        int n= numbers.size();
         int l=0,r=n-1;
        while(r>0){
            int sum=0;
         sum= numbers[l]+numbers[r];
        if(sum==target){
        vec[0] = l+1;
        vec[1] = r+1;
        return vec;
        }
        else if(sum<target){
            l++;
        }
        else r--;
        }
        return vec;
    }
};