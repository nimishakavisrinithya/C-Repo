int f(int x){
    int sum=0;
    for(int i=1; i<=x; i++) sum+=i;
    return sum;
}
int b(int x, int n){
    int sum=0; 
    for(int i=x; i<=n; i++) sum+=i;
    return sum;
}
int pivotInteger(int n) {
    for(int i=1; i<=n; i++){
        if(f(i)==b(i,n)) return i;
    }
    return -1;
}