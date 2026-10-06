class Solution {
public:
    bool cansplit(vector<int>& nums , int k , int maxsum){
        int count = 1;
        int sum = 0;

        for(int num : nums){
            if(sum + num <= maxsum){
                sum += num;
            }
            else{
                count++;
                sum = num;
            }
        }
        return count <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() , 0);
        int ans = high;

        while(low <= high){
            int mid = (low + high ) / 2;
            if(cansplit(nums,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};