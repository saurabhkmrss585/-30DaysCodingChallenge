class Solution {
public:
    string removeDuplicates(string s) {
    int  n=s.length();
    stack<char>st;
    
    for(int i=0;i<n;i++){
       if(!st.empty()&&st.top()==s[i]){
        st.pop();
       }
       else{
        st.push(s[i]);
       }
    }
    int i=0;
    string vec="";
    while(!st.empty()){
        vec+=st.top();
        st.pop();
        i++;
    }
    reverse(vec.begin(),vec.end());
    return vec;                            
    }
};