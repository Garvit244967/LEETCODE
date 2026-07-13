class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int minprice = INT_MAX;
        for(int price : prices){
            if(price < minprice){
                minprice = price;
            }
            else{
                profit = max(profit , price - minprice);
            }
        }
        return profit;
    }
};