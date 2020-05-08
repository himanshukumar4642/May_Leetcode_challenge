class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int j=J.length();
        int s=S.length();
        int ans=0;
        for(int i=0;i<j;i++){
            for(int k=0;k<s;k++){
                if(J[i]==S[k])
                    ans++;
            }
        }
        return ans;
    }
};
