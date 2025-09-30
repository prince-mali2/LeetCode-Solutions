class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0;
        int maxOpen =0;

        for(char c : s){
            if(c=='('){
                minOpen+=1;
                maxOpen+=1;
            }
            else if(c==')'){
                minOpen-=1;
                maxOpen-=1;
            }
            else{
                minOpen-=1;
                maxOpen+=1;
            }
            if(minOpen<0)minOpen=0;
            if(maxOpen<0)return false;
        }

        return(minOpen==0);
    }
};