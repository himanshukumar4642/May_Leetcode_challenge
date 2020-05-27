class Solution {
public:
    bool check(vector<int> v[],vector<int> &visited,vector<int> &group,int x){
        for(int u:v[x]){
            if(!visited[u]){
                visited[u]=1;
                group[u]=!group[x];
                if(!check(v,visited,group,u))
                    return false;
            }else if(group[u]==group[x])
                return false;
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> v[N+1];
        for(vector<int> x:dislikes){
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        vector<int> visited(N+1,0);
        vector<int> group(N+1,0);
        group[1]=0;
        for(int i=1;i<=N;i++){
            if(!visited[i]){
                if(!check(v,visited,group,i))
                    return false;
            }
        }
        return true;
    }
};
