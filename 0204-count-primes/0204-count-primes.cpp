vector<bool>isPrime(5e6+1, true);
bool seive(){
    isPrime[1]= isPrime[0] = false;
    for(long long i=2; i<=5e6; i++){
        if(isPrime[i]==true){
            for(long long j = i*i; j<=5e6; j+=i){
                isPrime[j] = false;
            }
        }
    }
    return true; 
}
bool k = seive();
class Solution {
public:
    int countPrimes(int n) {
        n--;
        int c=0;
        while(n>1){
            if(isPrime[n]) c++;
            n--;
        }
        return c;
    }
};