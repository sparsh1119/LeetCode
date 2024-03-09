class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>nums1_set(nums1.begin(),nums1.end());
        
        for(auto i : nums2){
            if(nums1_set.count(i)>0)
                return i;
        }
        
        return -1;
    }
};