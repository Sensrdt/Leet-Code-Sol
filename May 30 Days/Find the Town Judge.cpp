class Solution {
    public int findJudge(int N, int[][] trust) {
        
        int[] map = new int[N+1];
        
        for (int[] a : trust){
            map[a[0]]--;
            map[a[1]]++;
        }
        
        for (int i=1; i<=N; i++){
            System.out.println(map[i]);
            if (map[i] == N-1){
                return i;
            }
        }
        
        return -1;
    }
}