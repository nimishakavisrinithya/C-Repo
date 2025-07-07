class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < arr.size(); i++)
            mpp[arr[i]]++;
        int max = 0;
        for (auto i : mpp) {
            if (i.first == i.second) {
                if (max < i.first)
                    max = i.first;
            }
        }
        if(max==0) return -1;
        return max;
    }
};