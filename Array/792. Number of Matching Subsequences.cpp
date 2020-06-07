class Solution {
    public int numMatchingSubseq(String S, String[] words) {
        int ans = 0;
         
        for (String word : words) {
            if (isSubsequence(S, word)) {
                ans++;
            }
        }
         
        return ans;
    }
     
    private boolean isSubsequence(String s, String w) {
        int sIndex = 0;
        int wIndex = 0;
         
        while (wIndex < w.length() && sIndex < s.length()) {
            if (s.charAt(sIndex) == w.charAt(wIndex)) {
                sIndex++;
                wIndex++;
            }
            else {
                sIndex++;
            }
        }
         
        return wIndex == w.length();
    }
}