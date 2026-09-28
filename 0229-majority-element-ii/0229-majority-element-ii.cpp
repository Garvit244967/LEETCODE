class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand1 = nums[0];
        int cand2 = nums[0];
        int count1 = 0;
        int count2 = 0;

        for(int value : nums){
            if(value == cand1){
                count1++;
            }
            else if(value == cand2){
                count2++;
            }
            else if(count1 == 0){
                cand1 = value;
                count1 = 1;
            }
            else if(count2 == 0){
                cand2 = value;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int num : nums){
            if(num == cand1){
                count1++;
            }
            else if(num == cand2){
                count2++;
            }
        }
        vector<int> ans;
        if(count1 > n/3){
            ans.push_back(cand1);
        }
        if(count2 > n/3){
            ans.push_back(cand2);
        }
        return ans;
    }
};