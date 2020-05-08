class Solution {
public:
    int firstUniqChar(string s) {
        if(s==""){
            return -1;
        }
    int h[26];
    for(int i=0;i<26;i++)
        h[i]=0;
    for(int i=0;i<s.length();i++){
        h[s[i]-'a']++;
    }
    int ans=-1;
    for(int i=0;i<s.length();i++){
        if(h[s[i]-'a']==1){
            ans=i;
            break;
        }
    }
    return ans;
    }
};
