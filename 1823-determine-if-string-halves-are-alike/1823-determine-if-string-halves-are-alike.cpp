class Solution {
public:
int vow(char ch){
   ch = tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    return 0;
}
    bool halvesAreAlike(string s) {
       ;
        int l = s.size()/2;
        int c=0, c1=0;
       for(int i=0; i<l; i++){
        if(vow(s[i])){
           c++;
        }
       }
       for(int i=l; i<s.size(); i++){
        if(vow(s[i])){
           c1++;
        }
       }
       if(c==c1) return 1;
       return 0;
    }
};