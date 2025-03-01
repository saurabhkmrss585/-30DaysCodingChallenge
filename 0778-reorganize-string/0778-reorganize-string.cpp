class Solution {
public:
    string reorganizeString(string s) {
      int hash[26]={0};
      //creating hash for every character in string
     for(auto c:s){
        hash[c-'a']++;
     }

     //finding most frequent char and  frequency
     char max_char;
     int max_frequency=INT_MIN;
     for(int i=0;i<26;i++){
        if(hash[i]>max_frequency){
            max_char=i+'a';
            max_frequency=hash[i];
        }
     }
     //placing the max_char
     int index=0;
     while(index<s.size()&& max_frequency>0){
        s[index]=max_char;
      index+=2;
        max_frequency--;
     }

     if(max_frequency>0){
        return("");
     }
     else{
        //placing all the char
        hash[max_char-'a']=0;
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i+'a';
                hash[i]--;
                index=index+2;
            }
        }
     }

   return s;

    }
};