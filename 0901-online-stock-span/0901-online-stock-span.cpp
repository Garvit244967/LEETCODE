class StockSpanner {
public:
    vector<int> ans;
    StockSpanner() {
    }
    int next(int price) {
        ans.push_back(price);
        int count = 1;
        for(int i = ans.size() - 2; i >=0; i--){
            if(ans[i] <= price){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};