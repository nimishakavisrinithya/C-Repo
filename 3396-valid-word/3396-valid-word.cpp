class Solution {
public:
int cont(string s){
    int f1=0, f2=0, f3=0;
    for(int i=0; i<s.length(); i++){
        if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]>='0' && s[i]<='9') ) f1=1;
       
    }
    if(f1==1){
        return 0;
    }
    return 1;
}
int fun(string s){
    int f1=0, f2=0;
    for(int i=0; i<s.length(); i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') f1=1;
       else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) f2=1;
       if(f1==1 && f2==1) return 1;
    }
    return 0;
}
    bool isValid(string word) {
        if(word.length()>=3 && cont(word)==1 && fun(word)==1) return 1;
        return 0;
    }
};