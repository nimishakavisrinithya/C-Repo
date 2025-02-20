#include<math.h>
int find(int n, int k, int c){
    if(n==0) return c;
    int r=n%10;
    k++;
    if(r==6) c=k;
    return find(n/10, k, c);
}
int f(int n){
    if(n==0) return 0;
    int r = n%10;
    if(r==6) return 1;
    return f(n/10);
}
int maximum69Number (int num) {
   int m = find(num, 0, 0);
   printf("%d", m);
   if(f(num)) return num+3*pow(10,m-1);
   return num;
}
