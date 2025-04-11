class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>vec;
        stack<int>st;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]!=0){st.push(nums[i]%10);
            nums[i]/=10;
            }
            while(!st.empty()){
                vec.push_back(st.top());
                st.pop();
            }
        }
        return vec;
    }
};