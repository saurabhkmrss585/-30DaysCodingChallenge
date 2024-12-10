class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n=numbers.size();
        int l=0;
        int h=n-1;
        while(l<h){
         int sum=numbers[l]+numbers[h];
        if(sum==target){
            ans.push_back(l+1);
            ans.push_back(h+1);
            return ans;
         }
        else if(sum<target){
            l++;
        }
        else 
        h--;
        }

      return ans;

    }
};