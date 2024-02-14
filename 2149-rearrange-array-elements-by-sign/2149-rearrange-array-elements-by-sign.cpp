class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int i = 0 , j =1;
        vector<int>ans(nums.size());
        
        for(int q = 0 ; q<nums.size() ; q++){
            if(nums[q]>0){
                ans[i]= nums[q];
                i = i+2;
            }else{
                ans[j]= nums[q];
                j = j+2;
            }
            
        }
        
        return ans;
        
    }
};