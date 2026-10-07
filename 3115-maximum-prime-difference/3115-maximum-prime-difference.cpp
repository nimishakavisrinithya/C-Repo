vector<bool>is_Prime(3e5+1, true);
bool Prime(){
    is_Prime[0] = false;
    is_Prime[1] = false;
    for(int i=2; i*i<=3e5; i++){
        if(is_Prime[i]){
            for(int j=i*i; j<=3e5; j+=i){
                is_Prime[j] = false;
            }
        }
    }
    return true;
}
bool k = Prime();
class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        int pi=0;
        int pj=0;
        while(i<=j){
            if(pi==1 && pj==1) break;
            if(is_Prime[nums[i]]==false){
                i++;
            }
            else pi=1;
            if(is_Prime[nums[j]]==false){
                j--;
            }
            else  pj=1;
        }
        return j-i;
    }
};