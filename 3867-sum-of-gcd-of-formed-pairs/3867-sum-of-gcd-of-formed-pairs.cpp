class Solution {
public:
    long long gcd(long long a, long long b){
     if(a==0 || b==0){
        if(a==0) return b;
        return a;
     } 
     if(a<b) return gcd(b%a, a);
     else return gcd(a%b, b);
    }
    long long gcdSum(vector<int>& nums) {
        vector<long long>prefixGCD;
        long long n = nums.size();
        int m = 0;
        for(long long i=0; i<n; i++){
            if(m<nums[i]) m = nums[i];
            prefixGCD.push_back(gcd(m, nums[i]));
        }
        sort(prefixGCD.begin(), prefixGCD.end());
        int i=0, j=n-1;
        long long sum=0;
        while(j>i){
        sum+= gcd(prefixGCD[i],prefixGCD[j]);
        i++;
        j--;
        }
        return sum;
    }
};