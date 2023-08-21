class Solution {
public:
    

    
    //brute force some error
//     void solve(vector<int>nums,vector<vector<int>>& ans, int index){
//         //base case
//         if(index>=nums.size()){
//             ans.push_back(nums);
//             return;

//         }
//         for(int j= index; j<nums.size();j++){
//             swap(nums[index],nums[j]);
//             solve(nums,ans,index+1);

//             //back tracking
//             swap(nums[index],nums[j]);
//         }
//     }

//     vector<int> permute(vector<int>& nums,vector<vector<int>>&ans){
//         int index =0;
//         solve(nums,ans,index);
        
//         for(int i = 0 ; i<ans.size() ; i++){
//             if(ans[i]==nums )
//                 return ans[i+1];
//         }
//     }
    
    void nextPermutation(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<vector<int>>ans;
        // permute(nums,ans);
        
            //using stl 
            next_permutation(nums.begin(),nums.end());
        
    }
};