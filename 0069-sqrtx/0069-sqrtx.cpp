class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int k=0;
        if(x==0) return 0;
        if(x==1) return 1;
        while(low<=high){
           long long mid = low + (high - low) / 2;
            if(mid*mid > x){
                k = mid;//3
                high = mid-1;//2
            }
            else low = mid+1;
        }
        return k-1;
    }
};