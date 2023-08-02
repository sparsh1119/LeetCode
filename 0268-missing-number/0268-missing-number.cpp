class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cnt =0;
        int ans = -1;
        sort(nums.begin(),nums.end());
        for(int i =0 ;i<nums.size(); i++){
            if(nums[i]!= cnt){
                ans = cnt;
                break;
            }
            else{
            cnt++;
            }
        }
        return cnt;
    }
};