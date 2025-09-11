class Solution {
public:
int c=0;
int inn(int n, int c){
    if(n==1)return c;
        else if(n%2==0) return inn(n/2,c+1);
        else{
            int k = inn(n-1, c+1);
            if(n==INT_MAX) return k-1;
            int m = inn(n+1, c+1);
            if(k<m) return k;
            else return m;
        }
}
    int integerReplacement(int n) {
        return inn(n,c);
    }
};