class Solution {
    public String minWindow(String s, String t) {
         if (s.length() < t.length()) return "";

        Map<Character, Integer> map = new HashMap<>();

        for(char c : t.toCharArray()){
            map.put(c , map.getOrDefault(c ,0)+1);
        }

        int i=0;
        int j=0;
        char [] f2 = s.toCharArray();
        int matched= 0;
        int size = map.size();
        int minLen = Integer.MAX_VALUE;
        int start =0;

        while(j< s.length()){

            if(map.containsKey(f2[j])){
                map.put(f2[j] , map.get(f2[j])-1 );

                if(map.get(f2[j]) == 0) matched++;

            }

            

            while(matched == size){
                if( j-i+1 < minLen){
                minLen = j-i+1;
                start =i;
                }
                if(map.containsKey(f2[i])){
                    map.put(f2[i] , map.get(f2[i])+1);
                if(map.get(f2[i]) > 0 )matched--;
                }
                i++;
            }

        j++;
        }


        return minLen == Integer.MAX_VALUE ?"":s.substring(start , start+minLen);
    }
}