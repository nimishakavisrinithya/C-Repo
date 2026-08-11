class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        int n = asteroids.size();
        int i=0;
        while(i<n){
        if(asteroids[i]>0){ 
            ans.push_back(asteroids[i]);
            i++;
        }
        else{
            int f=0;
           while(!(ans.empty()) && ans.back()>0 && -1*asteroids[i]>=ans.back()){
            if(!(ans.empty()) && (-1*asteroids[i]>ans.back()))
              ans.pop_back();
               if(!(ans.empty()) && (-1*asteroids[i]==ans.back())){
                ans.pop_back();
                f = 1;
                break;
            }
           }
           if(f==1){
            i++;
            continue;
           }
           if(ans.empty() || ans.back()<0){
            ans.push_back(asteroids[i]);
           }
           i++;

        }
        }
        return ans;
    }
};