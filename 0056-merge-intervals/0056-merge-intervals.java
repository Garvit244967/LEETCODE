class Solution {
    public int[][] merge(int[][] intervals) {
        int n = intervals.length;
        if(n == 0) return new int[0][0];

        Arrays.sort(intervals , (a,b) -> Integer.compare(a[0] , b[0]));
        List<int[]> merged = new ArrayList<>();
        merged.add(intervals[0]);

        for(int i = 0; i < n; i++){
            if(intervals[i][0] <= merged.get(merged.size() - 1)[1]){
                merged.get(merged.size() - 1)[1] = Math.max(merged.get(merged.size() - 1)[1] , intervals[i][1]);
            }
            else{
                merged.add(intervals[i]);
            }
        }
        return merged.toArray(new int[merged.size()][]);
    }
}