class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>vec;
        int n = order.size();
        int m= friends.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(order[i]==friends[j]) vec.push_back(order[i]);
            }
        }
        return vec;
    }
};