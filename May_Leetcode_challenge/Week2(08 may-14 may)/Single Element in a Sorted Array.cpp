class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
            ans=ans^nums[i];
        return ans;
    }
};
