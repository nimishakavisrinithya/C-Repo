class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0, r = 0;
        double m = INT_MIN;
        int n = nums.size();
        double sum = 0;
        if (n < k)
            return sum; //0
        for(int i=0;i<n;++i){
            sum+=nums[i];
        }
        cout<<n<<endl;
        sum=sum/k;
        if(n==k) return sum;
        sum=0;
        for (int i = 0; i < k; i++) { 
            sum += nums[i]; // 5
            r++; // 1
        }
        cout<<r<<" "<<sum<<endl;
        while (r <= n) {
            m = max(m, sum / k); // m=5
            // cout<<m<<" ";
            sum -= nums[l]; // 0
            sum += nums[r]; // sum=51, 42
            r++; // r=5
            l++;//1
        }
        // cout<<n;
        return m;
    }
};