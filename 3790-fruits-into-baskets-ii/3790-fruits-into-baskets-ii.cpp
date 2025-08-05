class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int f = fruits.size();
        int c=0;
        for(int i=0; i<f; i++){
            for(int j=0; j<f; j++){
                if(baskets[j]>=fruits[i]){
                    cout<<baskets[j]<<" ";
                    baskets[j]=0;
                    c++;
                    break;
                }
            }
        }
        return f-c;
    }
};