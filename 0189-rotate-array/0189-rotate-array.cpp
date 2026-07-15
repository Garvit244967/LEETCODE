class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> withk;
        vector<int> notk;
        vector<int> result;

        for(int i = 0; i < n-k; i++){
            notk.push_back(nums[i]);
        }
        for(int i = n-k; i < n; i++){
            withk.push_back(nums[i]);
        }
        for(int i = 0; i < withk.size(); i++){
            result.push_back(withk[i]);
        }
        for(int i = 0; i < notk.size(); i++){
            result.push_back(notk[i]);
        }
        nums = result;
    }
};