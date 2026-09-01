class Solution {
    public int getSum(int n){
        int sum = 0;
        while(n > 0){
            int last = n % 10;
            sum = sum + last * last;
            n = n / 10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        HashSet<Integer> s1 = new HashSet<>();
        while(n != 1){
            if(s1.contains(n)){
                return false;
            }
            s1.add(n);
            n = getSum(n);
        }
        return true;
    }
}