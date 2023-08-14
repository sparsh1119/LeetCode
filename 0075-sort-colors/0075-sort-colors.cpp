class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end()); 
        int l = 0;
        int m = 0;
        int h = nums.size()-1;
        
        
        while(m<=h){
            // if(nums[m]==0){
            //     swap(nums[m],nums[l]);
            //         m++;
            //         l++;
            // }
            // else if(nums[m]==1){
            //     m++;
            // }
            // else{
            //     swap(nums[m],nums[h]);
            //     h--;
            // }
            switch(nums[m]){
                case 0 :
                    swap(nums[l++],nums[m++]);
                    break;
                
                case 1:
                    m++;
                    break;
                    
                case 2:
                    swap(nums[m],nums[h--]);
                    break;
            }
       }
       }
    
};