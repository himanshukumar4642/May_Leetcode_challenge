class Solution {
public:
    bool canConstruct(string rnote, string m) {
        int h[26]={0};
        for(char c:m){
            h[c-'a']++;
        }
        for(char c:rnote){
            if(h[c-'a']!=0){
                h[c-'a']--;
            }
            else
                return false;
        }
        return true;
    }
};
