class Solution {
public:
   
   int r(string s, char ch, int j){
    
    for(int i=j; s[i]!='\0'; i++){
         if(ch==s[i]) return i;
    }
    return -1;
   }
   int l(string s, char ch, int j){

    for(int i=j; i>=0; i--){
        if(ch==s[i]) return i;
        
    }
    return -1;
   }
    vector<int> shortestToChar(string s, char c) {
        vector<int>vec;
        int k=0;
        for(int i=0; s[i]!='\0'; i++){
          if(l(s,c,i)==-1) vec.push_back(abs(r(s,c,i)-i));
          else if(r(s,c,i)==-1) vec.push_back(abs(l(s,c,i)-i));
            else{
                if(abs(r(s,c,i)- i)< abs(l(s,c,i)- i)) vec.push_back(abs(r(s,c,i)-i));
                else vec.push_back(abs(l(s,c,i)-i));
            }
        }
        return vec;
    }
};