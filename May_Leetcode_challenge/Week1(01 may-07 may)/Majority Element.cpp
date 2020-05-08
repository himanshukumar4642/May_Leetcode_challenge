class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums.size();
        unordered_map<int,int> m;
        for(int x:nums){
            m[x]++;
            if(m[x]>n/2)
                return x;
        }
        return 0;
    }
};
