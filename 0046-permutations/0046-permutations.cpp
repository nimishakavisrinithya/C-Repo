class Solution {
public:
vector<vector<int>> vec;
void call(vector<int>& y,vector<int>&nums){
    int n= nums.size();
    if(y.size()==n){
        vec.push_back(y);
        return;
     }
    for(int i=0; i<n; i++){
        if(find(y.begin(), y.end(), nums[i])==y.end()) {
            y.push_back(nums[i]);
            call(y, nums);
             if(y.size()!=0) y.pop_back();
               // it only pop when the size is 3   
        }
    }
    // call(y, nums);     ---> wrong it needs to be in the loop cuz call() will check if the new combo is of size n or not and if so it will push it to vec 
    // if(y.size()!=0) y.pop_back();
     
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>y;
        call(y, nums);
        return vec;
    }
};