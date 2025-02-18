int pro(int n){
    if(n==0) return 1;
    else return (n%10)*pro(n/10);
}
int sum(int n){
    if(n==0) return 0;
    else return (n%10)+sum(n/10);
}
int subtractProductAndSum(int n) {
    return pro(n) - sum(n);
}