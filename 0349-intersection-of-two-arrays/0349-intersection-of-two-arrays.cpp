class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        int arr[1001] = {0};
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        for(int i=0; i<n; i++){
            int k = upper_bound(nums2.begin(), nums2.end(), nums1[i])- nums2.begin();
            if(k!=0){
                 if(nums1[i]==nums2[k-1]){
                    if( arr[nums1[i]]==0)
                 vec.push_back(nums1[i]);
                 arr[nums1[i]]++;
                 }
            }
        }
        return vec;
    }
};