class Solution {
public:
    string convert(string s, int numRows) {
        int n = 2*(numRows-1);
        int k=0;
        int size = s.length();
        if(size<numRows) return s;
         if(numRows==1 || size==1) return s;
        int L = n-2;
        int R = 2;
        string str;
        for(int i = k; i<size; i+=n){
         str+=s[i];
        }
        k++;
        int l=numRows-2;
        while(l>0){
            int i = k;
            str+=s[i];
            int flag = 0;
        while(i<size){
           if(flag == 0){
            i+=L;
            if(i<size){
            str+=s[i];
            }
            flag =1;
           }
           if(flag == 1){
             i+=R;
              if(i<size){
            str+=s[i];
            }
            flag=0;
           }
        }
        L-=2;
        R+=2;
        l--;
        k++;
    }
    for(int i = k; i<size; i+=n){
         str+=s[i];
        }
        return str;
    }
};