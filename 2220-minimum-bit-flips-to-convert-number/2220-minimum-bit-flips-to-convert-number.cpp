class Solution {
public:
int count(int n){
    int c=0;
    for(int i=0; i<32; i++){
        if(n&(1<<i)) c++;
    }
    return c;
}
    int minBitFlips(int start, int goal) {
        return count(start^goal);
    }
};