class Solution {
public:
    string frequencySort(string s) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        if(s.length()==0)
            return s;
        int h[256]={0};
        for(char c:s)
            h[c]++;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<256;i++){
            if(h[i])
            pq.push(make_pair(h[i],i));
        }
        string ans="";
        while(!pq.empty()){
            ans+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
