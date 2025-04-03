class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>f,m,b;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot) f.push_back(nums[i]);
            else if(nums[i]>pivot) b.push_back(nums[i]);
            else if(nums[i]==pivot) m.push_back(nums[i]);
        }
        f.insert(f.end(), m.begin(), m.end());
        f.insert(f.end(), b.begin(), b.end());
        return f;
    }
};