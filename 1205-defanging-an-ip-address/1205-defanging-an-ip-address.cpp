class Solution {
public:
    string defangIPaddr(string address) {
        string str;
        for(int i=0; i<address.size(); i++){
        if(address[i]!='.') str+=address[i];
        else{
            str+='[';
            str+='.';
            str+=']';
        }
        }
        return str;
    }
};