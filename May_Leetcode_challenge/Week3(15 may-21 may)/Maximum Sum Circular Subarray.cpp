class Solution {
public:
    int kadane(vector<int>& a,int n){
        int max_so_far=INT_MIN,max_ending_here=0;
        for(int i=0;i<n;i++){
            max_ending_here+=a[i];
            max_so_far=max(max_so_far,max_ending_here);
             if(max_ending_here<0)
                max_ending_here=0;
        }
        return max_so_far;
    }
    int maxSubarraySumCircular(vector<int>& a) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=a.size();
        int sum=0;
        int max_non_cir_sum=kadane(a,n);
        cout<<max_non_cir_sum<<" ";
        for(int i=0;i<n;i++){
            sum+=a[i];
            a[i]=-a[i];
        }
        int max_neg_sum=kadane(a,n);
        if(max_neg_sum+sum==0)
            return max_non_cir_sum;
        else
        return max(max_non_cir_sum,sum+max_neg_sum);
    }
};
