class Solution {
public:
    int possibleStringCount(string word) {
        /*map<char,int>mp;
        for(auto i:word) mp[i]++;
        int sum=0;
        for(auto i: mp){
         sum+=(i.second)-1;
        }
        return sum+1;*/
        int sum=0;
        int l = word.length();
        for(int i=0; i<l-1; i++){
         if(word[i]==word[i+1]) sum++;
        }
        return sum+1;
    }
};