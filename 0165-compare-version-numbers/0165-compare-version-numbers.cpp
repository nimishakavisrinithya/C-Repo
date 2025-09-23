class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1 = version1.size();
        int v2 = version2.size();
        int i=0,j=0;
        while(i < v1 || j < v2){
        string s1 = "",s2 = "";
        while(i<v1 && version1[i]!='.' ){
            s1+=version1[i];
            i++;
        }
        i++;
        while(j<v2 && version2[j]!='.' ){
            s2+=version2[j];
            j++;
        }
        j++;
        if(s1.empty()) s1="0";
        if(s2.empty()) s2 = "0";
        if(stoi(s1)<stoi(s2)) return -1;
        else if(stoi(s1)>stoi(s2)) return 1;
        }
        return 0;
    }
};