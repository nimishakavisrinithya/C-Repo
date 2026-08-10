class Solution {
public:
int count(int n){
    int c=0;
    for(int i=0; i<32; i++){
        if(n&(1<<i)) c++;
    }
    return c;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};