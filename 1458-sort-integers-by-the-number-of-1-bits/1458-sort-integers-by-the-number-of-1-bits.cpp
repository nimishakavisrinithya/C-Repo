class Solution {
public:
int c(int n) {
    return __builtin_popcount(n);
}
    vector<int> sortByBits(vector<int>& arr) {
        for(int i=0; i<arr.size()-1; i++){
            for(int j=0; j<arr.size()-1-i; j++){
                if(c(arr[j])>c(arr[j+1])) swap(arr[j], arr[j+1]);
                else if(c(arr[j])==c(arr[j+1])){
                    if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
                }
            }
        }
        return arr;
    }
};