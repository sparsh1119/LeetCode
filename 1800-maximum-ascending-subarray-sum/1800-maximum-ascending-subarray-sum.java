class Solution {
    public int maxAscendingSum(int[] nums) {
        int sum  = 0 ;
        int currSum = nums[0];
        int i = 1;
        while(i<nums.length){
            if(nums[i]>nums[i-1]){
                currSum += nums[i];
            }else{
                currSum = nums[i];
            }
            sum = Math.max(currSum , sum); 
            i++;
        }
        return sum;
    }
}