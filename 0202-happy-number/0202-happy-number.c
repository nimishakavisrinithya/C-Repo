int add(int num){
    if(num<10) return num*num;
return (num%10)*(num%10)+add(num/10);
}
bool isHappy(int n) {
    int k = add(n);
   while(k>=7){
     k = add(k);
   }
   if(k==1) return true;
    return false;
}