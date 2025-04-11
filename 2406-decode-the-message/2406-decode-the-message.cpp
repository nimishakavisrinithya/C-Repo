class Solution {
public:
    string decodeMessage(string key, string message) {
        string abc = "abcdefghijklmnopqrstuvwxyz";
        int k = 0;
        /*for (int i = 0; i < key.size(); i++) {
            if (key[i] == ' ') {
                key.erase(i, 1);
                i--;
            }
        }*/
        vector<char>vec;
        int frq[26] = {0};
        for(int i=0; i<key.size(); i++){
            if(key[i]!=' '){
            if(frq[key[i]-'a']==0 ) vec.push_back(key[i]);
            frq[key[i]-'a']++;
            }
        }
        for(char x : vec) cout<<x<<' ';
       // for(auto x : key) cout<<x;
        for (int i = 0; i < message.size(); i++) {
            if (message[i] != ' ') {
              //  k = vec.find(message[i]);
                int k;
                for(int j = 0; j < 26;j++){
                    if(vec[j]==message[i]) {
                        k = j;
                        break;
                    }
                }
               // cout << k <<' ';*/
                message[i] = abc[k];
               // cout<<abc[k]<<' ';
            }
        }
        return message;
    }
};