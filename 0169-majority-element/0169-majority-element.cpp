class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums.size() / 2;
        unordered_map<int,int> freq;

        for(int values : nums){
            freq[values]++;
            if(freq[values] > x){
                return values;
            }
        }
        return -1;
    }
};