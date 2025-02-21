int d(int n, int i){
    if(i>n/2) return 0;
    if(n%i==0) return i+d(n, i+1);
    return d(n, i+1);
}
bool checkPerfectNumber(int num) {
   int m = d(num, 1);
    if(m==num) return true;
    printf("%d", m); return false;
}