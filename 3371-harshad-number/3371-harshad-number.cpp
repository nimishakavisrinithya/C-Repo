class Solution {
public:
int s(int x){
    int sum=0;
    while(x>0){
        int r = x%10;
        sum+=r;
        x = x/10;
    }
    return sum;
}
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int k=s(x);
        if(x%k==0) return k;
        return -1;
    }
};