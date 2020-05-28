class Solution {
public:
    vector<int> countBits(int num) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<int> ans;
        for(int i=0;i<=num;i++)
            ans.push_back(__builtin_popcount(i));
        
        return ans;
    }
};
