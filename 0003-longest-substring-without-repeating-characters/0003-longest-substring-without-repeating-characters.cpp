class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        string res = "";
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(res.find(s[i]) == string::npos){
                res += s[i];
            }
            else{
                res = res.substr(res.find(s[i]) + 1);
                res += s[i];
            }
            maxi = max(maxi , (int)res.size());
        }
        return maxi;
    }
};