class Solution {
public:
    char kthCharacter(int k) {
       string str="a";
       int c=0;
       while(c!= k-1){
        int i=0;
       int l=str.length();
       while(i<=l-1){
        str+=str[i++]+1;
        c++;
        if(c==k-1) break;
       }
       } 
       cout<<str;
       return str[c];
    }
};