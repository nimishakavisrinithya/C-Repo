int numJewelsInStones(char* jewels, char* stones) {
    int frq[26 * 2] = {0};
    int sum = 0;
    int f[26 * 2] = {0};
    for (int i = 0; jewels[i] != '\0'; i++) {
        if (jewels[i] >= 'a' && jewels[i] <= 'z')
            frq[jewels[i] - 'a']++;
        else
            frq[jewels[i] - 'A' + 26]++;
    }
    for (int i = 0; stones[i] != '\0'; i++) {
        if (stones[i] >= 'a' && stones[i] <= 'z')
            f[stones[i] - 'a']++;
        else
            f[stones[i] - 'A' + 26]++;
    }
    int c=0;
    for (int i = 0; i < 26 * 2; i++) {
        printf(" %d %d %d  ", c++,frq[i], f[i]);
        if (f[i] != 0 && frq[i] != 0)
            sum += f[i];
    }
    return sum;
}