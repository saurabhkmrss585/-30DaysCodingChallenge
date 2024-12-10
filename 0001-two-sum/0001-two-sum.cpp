class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       vector<pair<int,int>>indexedNums;
       for(int i=0;i<n;i++){
        indexedNums.push_back({nums[i],i});
       }
       sort(indexedNums.begin(),indexedNums.end());
    
       int l=0;
       int h=n-1;
    while(l<h){
        int sum=indexedNums[l].first+indexedNums[h].first;
        if(sum==target){
            return{indexedNums[l].second,indexedNums[h].second};
        }
        else if(sum<target){
            l++;
        }
        else{
            h--;
        }
    }
    return {};


    }
};