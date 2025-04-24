class Solution {
public:
int alf(char ch){
    ch = tolower(ch);
    if(ch>='a' && ch<='z') return 1;
    return 0;
}
    string reverseOnlyLetters(string s) {
        int i=0;
        int j= s.size()-1;
        while(i<j){
            if(alf(s[i]) && alf(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(alf(s[i])==0 && alf(s[j])==1) i++;
            else if(alf(s[j])==0 && alf(s[i])==1) j--;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};