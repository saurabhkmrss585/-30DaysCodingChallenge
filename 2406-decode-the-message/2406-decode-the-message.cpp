class Solution {
public:
    string decodeMessage(string key, string message) {
        char start='a';
        vector<char>mapp(256,0);
        for(auto ch:key){
            if(ch!=' '&&mapp[ch]==0){
                mapp[ch]=start;
                start++;
            }
        }
        string ans;
        for(auto ch:message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char decoded_char=mapp[ch];
                ans.push_back(decoded_char);
            }
        }
        return ans;
    }
};