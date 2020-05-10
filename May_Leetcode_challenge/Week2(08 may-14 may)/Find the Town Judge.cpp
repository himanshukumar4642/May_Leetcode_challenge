class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<pair<int,int> > ans(N+1,{0,0});
        int i;
        for(i=0;i<trust.size();i++)
        {
            ans[trust[i][0]].first++;
            ans[trust[i][1]].second++;
        }
        for(i=1;i<=N;i++)
        {
            if(ans[i].first==0 && ans[i].second==N-1)
                return i;
        }
        return -1;
    }
};
