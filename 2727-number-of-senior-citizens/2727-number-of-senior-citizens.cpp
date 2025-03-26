class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c, k=0;
        string s1;
        for(string x : details){
            c=0;
            for(char y : x){
                c++;
                if(c==12){
                    s1 +=x.substr(11, 2);
                }
            }
        if(stod(s1)>60) k++;
        s1.clear();
        }
        return k;
    }
};