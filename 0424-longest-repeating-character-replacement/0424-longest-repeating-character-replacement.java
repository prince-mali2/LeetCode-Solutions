class Solution {
    public int characterReplacement(String s, int k) {
        int[] freq = new int[26];

        char [] arr = s.toCharArray();

        int i=0;
        int j=0;
        int maxLen = 0;
        int maxFreq =0;

        while(j<s.length()){
            freq[arr[j] - 'A']++;
            maxFreq = Math.max(maxFreq , freq[arr[j] - 'A'] );

            int size = j-i+1;

            while( size - maxFreq > k){
                freq[arr[i]-'A']--;
                i++;
                size = j-i+1;

            }
                maxLen = Math.max(maxLen, j-i+1);

            j++;
        }


    return maxLen;
    }
}