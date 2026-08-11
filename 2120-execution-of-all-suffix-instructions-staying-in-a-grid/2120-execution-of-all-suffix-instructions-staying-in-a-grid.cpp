class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>ans;
        int size = s.size();
        for(int q=0; q<size; q++){
          int i = startPos[0];
          int j = startPos[1];
          int c=0;
           int si = s.size();
          int k =q;
          while(i>=0 && j>=0 && i<n && j<n && k<size){
           if(s[k]=='L'){
            j--;
            if(j>=0) c++;
           }
           else if(s[k]=='R'){
            j++;
            if(j<n) c++;
           }
           else if(s[k]=='U'){
            i--;
            if(i>=0) c++;
           }
           else if(s[k]=='D'){
            i++;
            if(i<n) c++;
           }
           k++;
          }
          ans.push_back(c);
        }
        return ans;
    }
};