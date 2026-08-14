class Solution {
public:
    int minFlips(int a, int b, int c) {
        int k=0;
        for (int i = 0; i < 32; i++) {
            int f1=0;
            int f2=0;
            if ( !(((1 << i) & a) ^ ((1 << i) & c)) ) f2=1;
            else f1 = 1;
                if (((((1 << i) & a) | ((1 << i) & b))^((1 << i) & c)) != 0 && f1==1) {
                    a = (1 << i) ^ a;
                    k++;
                    f2=1;
                }
                 if (((((1 << i) & a) | ((1 << i) & b))^((1 << i) & c)) != 0 && f2==1) {
                    b = (1 << i) ^ b;
                    k++;
                    f1=1;
                }
        }
        return k;
    }
};