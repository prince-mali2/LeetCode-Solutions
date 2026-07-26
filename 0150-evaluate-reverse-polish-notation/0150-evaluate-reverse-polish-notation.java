class Solution {
    public int evalRPN(String[] tokens) {
        Stack <String> st = new Stack<>();


        for(String c : tokens){
            if(c.equals("+") || c.equals("*")|| c.equals("/") || c.equals("-")){
                int x1 =Integer.parseInt(st.pop());
                int x2 =Integer.parseInt(st.pop());
                int result=0;
                if(c.equals("+")) result = x1 + x2;
                if(c.equals("-")) result = x2 - x1;
                if(c.equals("/")) result = x2 / x1;
                if(c.equals("*")) result = x1 * x2;

                st.push(Integer.toString(result));
            }else
            st.push(c);

        }
        int ans = Integer.parseInt(st.peek());
        return ans;
    }
}