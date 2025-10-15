class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int m=0;
        int h = arr.size()-1;
        int ind = 0;
        while(l<=h){
            int mid = (l+h)/2;
            if(m<=arr[mid]){
                m = arr[mid];
                ind = mid;
            }
            if(mid==arr.size()-1){
            if(arr[mid-1]>=arr[mid]){
                h = mid-1;
            }
            else l = mid;
            }
            else{
                if(arr[mid+1]>=arr[mid]){
                    l = mid+1;
                }
                else h = mid-1;
            }
        }
        return ind;
    }
};