class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j=0;
       int i=1;
       while(i<nums.size()){
        if(nums[j]==nums[i]){
            i++;
        }
        else{
            j++;
            nums[j]=nums[i];
            i++;
        }
       }
       return j+1;
    
    }
};