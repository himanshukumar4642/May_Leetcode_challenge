class Solution {
public:
    int minDistance(string s1, string s2) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int m=s1.length();
        int n=s2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                }
            }
        }
        return dp[m][n];
    }
};
