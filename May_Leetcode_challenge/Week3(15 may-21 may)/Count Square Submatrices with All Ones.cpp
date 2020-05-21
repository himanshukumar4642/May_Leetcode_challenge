class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
        int ans=0,m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
            ans+=matrix[i][n-1];
        for(int i=0;i<n;i++)
            ans+=matrix[m-1][i];
        ans-=matrix[m-1][n-1];
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(matrix[i][j]){
                    matrix[i][j]+=min(matrix[i+1][j+1],min(matrix[i][j+1],matrix[i+1][j]));
                }
                ans+=matrix[i][j];
            }
        }
        return ans;
    }
};
