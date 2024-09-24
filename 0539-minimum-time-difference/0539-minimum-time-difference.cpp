class Solution {
public:
    
    int minutes(string &s){
        int hr=stoi(s.substr(0,2));
        int min=stoi(s.substr(3,2));
        int totaltime=hr*60+min;
        return totaltime;
    }
    
    
    int findMinDifference(vector<string>& timePoints) {
         vector <int>diff;
         for(string s:timePoints){
            diff.push_back(minutes(s));
         }
         sort(diff.begin(),diff.end());
         int n=INT_MAX;
         for(int i=0;i<diff.size()-1;i++){
            n=min(n,diff[i+1]-diff[i]);
            
         }
         n=min(n,diff[0]+1440-diff[diff.size()-1]);
         return n;
    }
};