class Solution {
public:
    int findComplement(int num) {
        if(num==0)
            return 1;
        int n=(int)log2(num)+1;
        int ans=(long long)((pow(2,n)-1)-num);
        return ans;
    }
};
