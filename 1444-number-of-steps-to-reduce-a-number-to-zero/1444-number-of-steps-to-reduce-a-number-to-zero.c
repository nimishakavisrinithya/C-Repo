int co(int n){
    if(n==0) return 0;
    if(n%2==0) return 1+ co(n/2);
    return 1+ co(n-1);
}
int numberOfSteps(int num) {
    return co(num);
}