vector<int>dp(101,-1);
class Solution {
public:
    
    int robHelp(vector<int>& nums,int n){
        
        if(n<=0 )return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]= max(robHelp(nums,n-1),
                   nums[n-1]+robHelp(nums,n-2));
    }
    
    int rob(vector<int>& nums) {
       int n = nums.size();
        fill(dp.begin(),dp.end(),-1);
        return robHelp(nums,n);
    }
};