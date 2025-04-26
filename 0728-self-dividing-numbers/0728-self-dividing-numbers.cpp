class Solution {
public:
int sd(int n){
    int o = n;
    while(n>0){
        int r = n%10;
        if(r==0) return 0;
        if(o%r!=0) return 0;
        n = n/10;
    }
    return 1;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left; i<=right; i++){
            if(sd(i)) vec.emplace_back(i);
        }
        return vec;
    }
};