class Solution {
    public int maxArea(int[] height) {
        int s =0;
        int e = height.length-1;
        int maxCap = 0;
        while(s<e){
            int h = Math.min(height[s],height[e]);
            int w = e-s;
            int currCap = h*w;
            maxCap = Math.max(currCap,maxCap);
            if(height[s]<height[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxCap;
    }
}