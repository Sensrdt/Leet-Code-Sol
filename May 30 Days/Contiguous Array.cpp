class Solution {
    public int findMaxLength(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap();
        map.put(0, -1);
        
        int max_length = 0;
        int counts = 0;
        
        for (int i=0; i<nums.length; i++){
            
            if (nums[i] == 0){
                counts += -1;
            }else{
                counts += 1;
            }
            
            if (map.containsKey(counts)){
                max_length = Math.max(max_length, i-map.get(counts));
            }else{
                map.put(counts, i);
            }
        }
        
        return max_length;
        
    }
}