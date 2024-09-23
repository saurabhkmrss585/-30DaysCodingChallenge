class Solution {
public:

    bool check_palindrome(string s,int i,int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int n=s.length();
      int i=0;
      int j=n-1;
      while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            bool ans1=check_palindrome(s,i+1,j);
            bool ans2=check_palindrome(s,i,j-1);
              if(ans1||ans2){
            return true;
        }
        else{
            return false;
        }
        }
      
      }
      return true;
    }
};