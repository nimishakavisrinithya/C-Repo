class Solution {
public:
    int getLeastFrequentDigit(int n) {
    unordered_map<int,int>mpp;
    while(n>0){
        int r = n%10;
        mpp[r]++;
        n=n/10;
    }
   int minfrq= INT_MAX, min = INT_MAX;
    for(auto x : mpp){
        if(x.second<minfrq){
            minfrq= x.second;
            min = x.first;
        }
        else if(x.second==minfrq && x.first<min){
        min = x.first;
        }
    }
    return min;
    }
};