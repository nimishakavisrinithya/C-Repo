class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
          int n = nums.size();
          map<vector<int>, int>mpp;
          vector<vector<int>>A;
          for(int i=0; i<(1<<n); i++){
            vector<int>a;
            for(int j =0; j<n; j++){
                if(i&(1<<j)){
                    a.push_back(nums[j]);
                }
            }
            if(a.size()>=2 && (is_sorted(a.begin(), a.end())) && mpp.find(a)==mpp.end())
            A.push_back(a);
            mpp[a]++;
          }
          return A;
    }
};