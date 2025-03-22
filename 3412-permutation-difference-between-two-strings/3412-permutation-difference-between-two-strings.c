int search(char *a, char t){
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]==t) return i;
    }
    return -1;
}
int findPermutationDifference(char* s, char* t) {
    int n = strlen(t);
    int sum=0;
    for(int i=0; s[i]!='\0'; i++){
        int k = search(t, s[i]);
        sum+= abs(i-k);
    }
    return sum;
}