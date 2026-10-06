class Solution {
public:
    long long calculate_total_hours(vector<int>& piles , int speed){
        long long total_hours = 0;
        for(int bananas : piles){
            total_hours += (bananas + speed - 1LL) / speed;
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin() , piles.end());
        int low = 1;
        int high = maxPile;
        int ans = maxPile;

        while(low < high){
            int mid = (low + high) / 2;
            long long total_hours(calculate_total_hours(piles,mid));
            if(total_hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};