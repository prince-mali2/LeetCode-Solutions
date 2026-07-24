class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int size = s1.length();

        int i = 0;
        int j = 0;
        int [] freq1 = new int[26];
        int [] freq2 = new int[26];
        char[] c2  = s2.toCharArray();

        for(char c : s1.toCharArray()){
            freq1[c - 'a']++;
        }


        while(j< s2.length()){
            
            freq2[c2[j] - 'a']++;

            if( j-i+1 == size && Arrays.equals(freq1 , freq2)){ return true;}
            else if( j-i+1 ==size){
                 freq2[c2[i] - 'a']--;
                 i++;
            }
            j++;
        }
        
        return false;
    }
}