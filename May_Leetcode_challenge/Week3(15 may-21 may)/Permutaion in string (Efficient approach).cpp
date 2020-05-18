class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int m = s1.length(), n = s2.length();
        if (m > n)
            return false;
         int i;
        vector<int> h(26, 0);
        for (i = 0; i < m; i++) {
            h[s1[i] - 'a']++;
            h[s2[i] - 'a']--;
        }
        if (check(h))
            return true;
        for (i = m; i < n; i++) {
            h[s2[i] - 'a']--;
            h[s2[i - m] - 'a']++;
            if (check(h))
                return true;
        }
        return false;
    }
    bool check(const vector<int> h) {
        int i;
        for (i = 0; i < 26; i++) {
            if (h[i] != 0)
                return false;
        }
        return true;
    }
    
};
