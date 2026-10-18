class Solution {

    public boolean helper(String s, int i, int j){
        while(i<=j){
            if(s.charAt(i) != s.charAt(j)) return false;
            i++;j--;
        }
        return true;
    }


    public boolean validPalindrome(String s) {
        int i=0;
        int j= s.length()-1;
        
    
        while(i<=j){ 
            if(s.charAt(i) != s.charAt(j)) {
                
            boolean b1 = helper(s, i+1,j);
            boolean b2 = helper(s, i,j -1);
            return b1|b2;

        }

        i++;j--;
        }
        return true;
    }  
}