class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        HashMap<Character, Integer> mp = new HashMap<>();

        int i=0;
        int j=0;
        char [] arr = new char[s.length()];
        arr = s.toCharArray();
        int length = 0;

        while(j < s.length()){
            if(mp.containsKey(arr[j])){
                while(mp.containsKey(arr[j])){
                    mp.remove(arr[i]);
                    i++;
                }
                    mp.put(arr[j], 1 );

            }
            else{
                mp.put(arr[j], mp.getOrDefault(arr[j], 0)+1 );
            }
            j++;
            length = Math.max(length, mp.size());
        }
        return length;
    }
}