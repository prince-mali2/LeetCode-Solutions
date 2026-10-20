class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n = strs[0].length();
        String s = "";


        for(int i=0;i <n;i++){
            char s2 = strs[0].charAt(i);
            for(int j=1;j<strs.length; j++){
                if( i>strs[j].length()-1 || strs[j].charAt(i) != s2) return s;
            }
            s+=s2;
        }

        return s;
    }
}