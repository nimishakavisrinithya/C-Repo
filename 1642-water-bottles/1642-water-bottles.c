int r(int t, int x, int f){
    f= t/x;
    if(f==0) return 0;
    int e= t%x;
    t = f+e;
    printf("%d ", t);
    return f+r(t,x,f);

}
int numWaterBottles(int numBottles, int numExchange) {
    int k = r(numBottles, numExchange, 2)+numBottles;
    return k;
}