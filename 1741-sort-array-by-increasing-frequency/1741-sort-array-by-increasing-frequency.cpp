class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
      unordered_map<int,int>mpp;
      for(int x : nums){
        mpp[x]++;
      }
    vector<pair<int, int>> vec(mpp.begin(), mpp.end());
      for(int i=0; i<vec.size()-1; i++){
        for(int j=0; j<vec.size()-1-i; j++){
            if(vec[j].second>vec[j+1].second) swap(vec[j], vec[j+1]);
            else if(vec[j].second==vec[j+1].second){
                if(vec[j].first<vec[j+1].first) swap(vec[j], vec[j+1]);
            }
        }
      }
      vector<int>v;
      for(auto x : vec){
        for(int i=0; i<x.second; i++){
        v.push_back(x.first);
        }
      }
      return v;
    }
};