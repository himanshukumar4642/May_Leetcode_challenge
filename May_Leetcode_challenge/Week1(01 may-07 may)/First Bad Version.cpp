// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long l=1,r=n;
        long ans=n;
        while(l<r){
            long mid=(l+r)/2;
            if(isBadVersion(mid)){
                r=mid;
                ans=min(ans,mid);
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
