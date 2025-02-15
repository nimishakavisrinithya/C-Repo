bool isPalindrome(int x) {
    signed long long rev=0, org = x;
    while(x>0)
    {
        int r=x%10;
        rev = rev*10+r;
        x=x/10;
    }
    if(org==rev) return true;
    return false;
}