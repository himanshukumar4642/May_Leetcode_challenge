class Solution {
public:
    bool isPerfectSquare(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for(long long i=1;i*i<=num;i++){
            if(i*i==num)
                return true;
        }
        return false;
    }
};
