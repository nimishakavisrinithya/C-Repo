class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0, c=0;
        int n = arr.size();
        for(int i=0; i<k; i++){
        sum+=arr[i];
        }
       if(sum/k>= threshold) c++;
       int l=0,r=k;
       while(r<n){
        sum+=arr[r];
        sum-=arr[l];
        if(sum/k>=threshold) c++;
        r++;
        l++;
       }
       return c;

    }
};