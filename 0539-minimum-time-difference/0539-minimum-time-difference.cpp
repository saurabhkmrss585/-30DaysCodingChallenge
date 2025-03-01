class Solution {
public:

   int convertToMin(string&hour){
      int hr=stoi(hour.substr(0,2));
      int min=stoi(hour.substr(3,2));
      return hr*60+min;
   }


    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(auto time:timePoints){
            minutes.push_back(convertToMin(time));
        }
        sort(minutes.begin(),minutes.end());
        int ans=INT_MAX;
       for(int i=0;i<minutes.size()-1;i++){
       ans=min(ans,minutes[i+1]-minutes[i]);
       }
      int lastDiff=+minutes[0]+1440-minutes[minutes.size()-1];
      ans=min(ans,lastDiff);
      return ans;

    }
};