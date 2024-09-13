class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>stk;
       int count=0;
       for(int i=0;i<s.size();i++){
         if(s[i]=='('){
            stk.push(s[i]);
         }
         else{
            if(stk.empty()){
                count++;
            }
            else{
                stk.pop();
            }
         }
         

       } 
      if(stk.empty()){
        return count;
      }
      else{
        return (stk.size()+count);
      }
    }
    
};