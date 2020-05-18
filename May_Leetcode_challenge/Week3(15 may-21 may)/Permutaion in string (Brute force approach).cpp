class Solution {
public:
    bool check(int ph[26],int th[26]){
        for(int i=0;i<26;i++){
            if(ph[i]!=th[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int m=s1.length();
        int n=s2.length();
        if(m>n)
            return false;
        int ph[26]={0};
        for(int i=0;i<m;i++)
            ph[s1[i]-'a']++;
        vector<string> s;
        for(int i=0;i<n-m+1;i++){
            s.push_back(s2.substr(i,m));
        }
        for(string x:s){
            int xh[26]={0};
            for(int i=0;i<m;i++){
                xh[x[i]-'a']++;
            }
            if(check(ph,xh))
                return true;
        }
        return false;
    }
};
