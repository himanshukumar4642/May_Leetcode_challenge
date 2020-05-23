class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<vector<int>> ans;
        int a=A.size(),b=B.size();
        int i=0,j=0;
        while(i<a && j<b){
            int l=max(A[i][0],B[j][0]);
            int r=min(A[i][1],B[j][1]);
            if(l<=r)
                ans.push_back({l,r});
            if(A[i][1] < B[j][1])
                i++;
            else
                j++;
        }
        return ans;
    }
};
