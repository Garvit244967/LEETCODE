class Solution {
public:
    int getsum(int n){
        int sum = 0;
        while(n > 0){
            int last = n % 10;
            sum = sum + last * last;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n != 1 && n != 4){
            n = getsum(n);
        }
        return n == 1;
    }
};