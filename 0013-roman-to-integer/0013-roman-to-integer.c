int roman(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;  // Invalid character
    }
}
int romanToInt(char* s) {
int c=0;
        for(int i=0; s[i]!='\0'; i++){
            int a = roman(s[i]), b = roman(s[i+1]);
        if(a<b && (a==1 || a==10 || a==100 || a==1000)){
            c-=a;
        }
        else c+=a;
    }
    return c;
}