class Solution {
public:
int freq(string str){
    unordered_map<char,int> mpp;

    for(char c : str){
        if(++mpp[c] > 1)
            return 0;
    }
    return 1;
}
    int maxLength(vector<string>& arr) {
        size_t m = arr[0].size();
         string max;
        int mo=0;
        vector<string>vec;
        for(auto i : arr){
            unordered_map<char,int>mpp;
            string str;
            for(auto j : i){
                mpp[j]++;
                str+=j;

            }
            if(mpp.size()== i.size()){
            vec.push_back(str);
            cout<<i<<" ";
            }
        }
        if(vec.empty()) return 0;
        int size=vec.size();
        vector<string>Arr;
       for(int i=0; i<(1<<size); i++){
        string A;
        for(int j=0; j<size; j++){
            if(i&(1<<j)){
                A+=vec[j];
            }
        }
        if(freq(A)==1 && A.size()>mo){
                mo = A.size();
                max = A;
            }
       }
        return max.size();
    }
};