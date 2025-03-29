class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>tar;
        for(int i=0; i<prices.size(); i++){
            int min =0;
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j]<=prices[i]){
                    min = prices[j];
                    break;
                }
            }
            if(min<=prices[i]) tar.emplace_back(prices[i]-min);
            else tar.emplace_back(prices[i]);
        }
        return tar;
    }
};