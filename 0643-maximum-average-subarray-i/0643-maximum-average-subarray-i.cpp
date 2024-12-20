class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int i=0;
       int j=k-1;
       int sum=0;
       for(int y=i;y<=j;y++){
        sum+=nums[y];
       }
       j++;
       int max_sum=sum;
       while(j<nums.size()){
        sum=sum+nums[j++];
        sum=sum-nums[i++];
        max_sum=max(max_sum,sum);
       }
       return max_sum/double(k);
        

    }
};