class Solution {
public:
    bool iscycle(vector<int> adj[],vector<int> &visited,int v){
        if(visited[v]==1)
            return true;
        if(visited[v]==0){
            visited[v]=1;
            for(auto edge : adj[v]){
                if(iscycle(adj,visited,edge))
                    return true;
            }
        }
        visited[v]=2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> adj[n];
        for(auto edge : pre)
            adj[edge[1]].push_back(edge[0]);
        vector<int> visited(n,0);
        
        for(int i=0;i<n;i++){
            if(iscycle(adj,visited,i))
                return false;
        }
        return true;
    }
};
