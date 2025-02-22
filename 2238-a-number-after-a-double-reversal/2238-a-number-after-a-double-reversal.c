bool isSameAfterReversals(int num) {
  int r = num%10;
  if(num==0) return true;
  if(r==0) return false;
  return true;  
}