int xorOperation(int n, int start) {
    int num[n];
    for(int i=0; i<n; i++) num[i]= start+2*i;
    int s= num[0];
    for(int i=1; i<n; i++) s^=num[i];
    return s;
}