int match(int t, int m){
    if(t%2==0){
         m= t/2;
         if(m==0) return 0;
    return m+match(t/2, m);
    }
    else{
        m = (t-1)/2;
        if(m==0) return 0;
        return m+match(((t-1)/2)+1, m);
    }
    
}

int numberOfMatches(int n){
return match(n,n);
}