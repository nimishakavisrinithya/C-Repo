const int N = 4 * 1000000;
vector<bool> isPrime(N + 1, true);
bool Prime(){
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i*i<=N; i++){
        if(isPrime[i]){
        for(int j=i*i; j<=N; j+=i){
           isPrime[j] = false;
        }
        }
    }
    return true;
}
 bool k = Prime();
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int mx=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i==j) || (i + j == n - 1)){
                    if(isPrime[nums[i][j]]) mx = max(mx, nums[i][j]);
                }
            }
        }
        return mx;
    }
};