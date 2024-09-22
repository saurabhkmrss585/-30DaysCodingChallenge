class Solution {
public:
    string removeDuplicates(string s, int k) {
    int n=s.length();
       vector<int>count(n);
       int i=0;
       int j=0;
       while(j<n){
        s[i]=s[j];
        count[i]=1;
        if(i>0&&s[i]==s[i-1]){
            count[i]+=count[i-1];
        }
        if(count[i]==k){
            i-=k;
        }
        ++i;
        ++j;
    
       }
       return s.substr(0,i);
       

    }
};