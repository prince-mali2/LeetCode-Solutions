class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> m = new HashMap<>();

        int length = 0;
        char arr[] = s.toCharArray();
        int i=0;
        int j=0;


        while(j<s.length()){
            if(m.containsKey(arr[j])){
                while(m.containsKey(arr[j])){
                    m.remove(arr[i]);
                    i++;
                }
                 m.put(arr[j], 1 );

            }else{
                m.put(arr[j], m.getOrDefault(arr[j], 0)+1);
            }
            length = Math.max(j-i+1 , length);
            j++;
        }

        return length;
    }
}