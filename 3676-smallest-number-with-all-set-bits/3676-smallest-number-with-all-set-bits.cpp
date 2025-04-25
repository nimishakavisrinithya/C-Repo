class Solution {
public:
int to_bit(int n){
string str;
if(n%2==0) str+='0';
else str+='1';
while(n>0){
    int r = n/2;
    if(r%2==0) str+='0';
    else str+='1';
    n = r;
}
reverse(str.begin(), str.end());
  int k = stoi(str);
  return k;
}
int count(int n){
    while(n>0){
        int r = n%10;
        if(r==0) return 0;
        n = n/10;
    }
    return 1;
} 
    int smallestNumber(int n) {
     while(1){
        int k = to_bit(n);
         if(count(k)) return n;
         n++;
     }  
    }
};