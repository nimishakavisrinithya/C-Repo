class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       int frq[101] ={0};
       int f[101] = {0};
       int c=0, c1=0;
       vector<int>tar;
       for(int i=0; i<nums1.size(); i++) frq[nums1[i]]++;
       for(int i=0; i<nums2.size(); i++) f[nums2[i]]++;
       for(int i=0; i<101;i++) if(frq[i]!=0 && f[i]!=0){
        c+=frq[i];
        c1+=f[i];
       }
       tar.push_back(c);
       tar.push_back(c1);
       return tar;

    }
};