class Solution {
public:
    bool static comp(const pair<vector<int>,int> &a,const pair<vector<int>,int> &b){
        return a.second<b.second;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<pair<vector<int>,int> > req;
        for(vector<int> v:points){
            int dis=(v[0]*v[0])+(v[1]*v[1]);
            req.push_back(make_pair(v,dis));
        }
        sort(req.begin(),req.end(),comp);
        vector<vector<int>> ans;
        int i;
        for(i=0;i<k;i++){
            ans.push_back(req[i].first);
        }
        return ans;
    }
};
