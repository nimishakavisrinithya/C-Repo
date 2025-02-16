int add(int num){
    if(num<10) return num;
return num%10+add(num/10);
}
int addDigits(int num) {
   int k = add(num);
   while(k>=10){
     k = add(k);
   }
   return k;
}