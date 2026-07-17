class Solution {
    public boolean isPalindrome(String s) {
        ArrayList<Character> arr = new ArrayList<>();


        for(char c : s.toCharArray()){
            char ch = Character.toLowerCase(c);

            if(Character.isLetterOrDigit(ch)) arr.add(ch);
        }

        int i=0;
        int j=arr.size()-1;

        while(i<j){
            if(arr.get(i) != arr.get(j)) return false;
            i++;
            j--;
        }
        return true;
    }
}