class Solution {
public:
    bool check(int ph[26],int sh[26]){
        for(int i=0;i<26;i++){
            if(ph[i]!=sh[i])
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=s.length();
        int m=p.length();
        if(n<m){
            return {};
        }
        vector<int> ans;
        int ph[26]={0},sh[26]={0};
        for(int i=0;i<m;i++){
            ph[p[i]-'a']++;
            sh[s[i]-'a']++;
        }
        for(int i=m;i<n;i++){
            if(check(ph,sh)){
                ans.push_back(i-m);
            }
            sh[s[i]-'a']++;
            sh[s[i-m]-'a']--;
        }
        if(check(ph,sh))
            ans.push_back(n-m);
        return ans;
    }
};
