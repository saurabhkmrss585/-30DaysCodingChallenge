class Solution {
public:
    int strStr(string haystack, string needle) {
     int s=haystack.find(needle);
            if(s!=string::npos){
                return s;    
            }
            else{
                return -1;
            }
    }
};