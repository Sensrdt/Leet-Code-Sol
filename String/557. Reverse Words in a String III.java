class Solution {
    public String reverseWords(String s) {
        
        StringBuilder ans = new StringBuilder();
        
        String r[] = s.split(" ");
        
        for (String a : r){
            ans.append(new StringBuffer(a).reverse().toString() + " ");
        }
        
        return ans.toString().trim();
    }
}