int coo(int num, int k){
    if(num==0) return 0;
    int r = num%10;
    if(k%r==0) return 1+coo(num/10, k);
    return coo(num/10, k);
}
int countDigits(int num) {
    int k=num;
    int a= coo(num, k);
    return a;
}