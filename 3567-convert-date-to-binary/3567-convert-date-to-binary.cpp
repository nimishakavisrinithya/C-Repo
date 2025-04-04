class Solution {
public:
    string s(string str){
        int n= stoi(str);
        string s;
        while(n>0){
        if(n%2!=0) s+='1';
        else s+='0';
        n=n/2;}
        reverse(s.begin(), s.end());
        return s;
    }
    string convertDateToBinary(string date) {
        int k=0;
        int c=0;
        string str;
        string x;
        for(int i=0; i<date.size(); i++){
            c++;
            if(date[i]=='-' || i==date.size()-1){
                str=date.substr(k,c-1);
                x+=s(str);
                x+='-';
                k = i+1;
            }
        }
        x.pop_back();
        return x;
    }
};