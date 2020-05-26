class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=nums.size();
        unordered_map<int,int> m;
        m[0]=-1;
        int len=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]==0)?-1:1;
            if(m.find(sum)!=m.end()){
                if(len<(i-m[sum])){
                    len=i-m[sum];
                }
            }
            else
                m[sum]=i;
        }
        return len;
    }
};
