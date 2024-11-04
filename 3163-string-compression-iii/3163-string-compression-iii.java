class Solution {
    public String compressedString(String word) {
        char[] arr = word.toCharArray();
        String comp = "";

        int i  = 0;
        while(i<arr.length){
            char c = arr[i];
            int count = 1;
            i++;
            while(i<arr.length &&  arr[i]==c && count<9){
                count++;
                i++;
            }
            comp = comp+count+c;
        }
        return comp;
    }
}