int r(int n, int m){
    if(m==0) return 0;
    return n+r(n+1, m-1);
}
int totalMoney(int n) {
    int k = n/7, c=0, q=1;
    while(k--){
        c+=r(q, 7);
        q=q+1;
    }
    if(n%7!=0) c+=r(q, n%7);
    return c;
}