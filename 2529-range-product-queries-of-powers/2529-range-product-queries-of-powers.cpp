class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int MOD = 1000000007;
        int sum = 0;
        vector<int>x;
        vector<int>v;
        int k = log2(n)+1;
        for(int i=0; i<k; i++){
            int b = n & (1<<i);
            if(b!=0) x.push_back(b);
        }
        for(int i=0; i<queries.size(); i++){
            long long pro =1;
            for(int j = queries[i][0]; j<=queries[i][1]; j++){
                pro=(x[j]*pro)%MOD;
            }
            v.push_back((int)pro);
        }
        return v;
    }
};