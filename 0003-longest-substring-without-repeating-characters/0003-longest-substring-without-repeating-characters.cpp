class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string s1 = "";
        int maxi = 1;
        int n = s.length();
        if(n == 0) return 0;
        for(int i = 0; i < n; i++){
            while(s1.find(s[i]) != string::npos){
                s1.erase(s1.begin());
            }
            s1 += s[i];
            maxi = max(maxi , (int)s1.length());
        }
        return maxi;
    }
};