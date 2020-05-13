class Solution {
public:
    string removeKdigits(string num, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=num.length();
        if(n==k)
            return "0";
        stack<char> st;
        int i=0;
        for(i=0;i<n;i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        string sb="";
        while(!st.empty()){
            sb+=st.top();
            st.pop();
        }
        reverse(sb.begin(),sb.end());
        i=0;
        while(sb.length()>0 && sb[0]=='0'){
            sb.erase(0,1);
        }
        if(sb.length()>0)
        return sb;
        else
            return "0";
    }
};
