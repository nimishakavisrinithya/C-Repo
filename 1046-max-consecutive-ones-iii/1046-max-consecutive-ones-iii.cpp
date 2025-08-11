class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z = 0, l = 0, r = 0, m = 0;
        queue<int> q;
        int n = nums.size();
        while (r < n) {
            if (nums[r] == 0) {
                z++;
                q.push(r);
            }
            if (z > k) {
                l = q.front() + 1;
                z-=1;
                q.pop();
            }
            m = max(m, r - l + 1);
            cout<<"r is at "<<r<<endl;
            cout<<r-l+1<<endl;
           // cout<<"zeros are"<<z<<endl;
            r++;
        }
        return m;
    }
};