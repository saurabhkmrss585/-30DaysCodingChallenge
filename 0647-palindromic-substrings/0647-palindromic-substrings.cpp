class Solution {
public:
   int calculate(string s ,int i,int j){
       int count=0;
       while(i>=0&&j<s.length()&&s[i]==s[j]){
        count++;
        i--;
        j++;
       }
       return count;
     
   }
    int countSubstrings(string s) {
        int  totalcount=0;
        for (int i=0;i<s.length();i++){
            //for odd
            int odd_ans=calculate(s,i,i);
            int  even_ans=calculate(s,i,i+1);
            totalcount+=odd_ans+even_ans;
        }
        return totalcount;
    }
};