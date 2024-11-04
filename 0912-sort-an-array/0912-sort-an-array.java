class Solution {
    public void quickSort(int[]nums , int s, int e){
        if(s>=e) return;
        int i = s;
        int j = e;
        int pivot = nums[(s+e)/2];
        while(i<=j){
            while(nums[i]<pivot){
                i++;
            }
            while(nums[j]>pivot){
                j--;
            }
            if(i<=j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
        }
        quickSort(nums,s,j);
        quickSort(nums,i,e);
    }

    public int[] sortArray(int[] nums) {
        quickSort(nums,0,nums.length-1);
        return nums;
    }
}