class Solution {
    public boolean isCircularSentence(String sentence) {
        String[] arr = sentence.split(" ");
        
        // Check each word's last character with the next word's first character
        for (int i = 0; i < arr.length - 1; i++) {
            if (!arr[i].substring(arr[i].length() - 1).equalsIgnoreCase(String.valueOf(arr[i + 1].charAt(0)))) {
                return false;
            }
        }

        // Check the last word's last character with the first word's first character
        if (!arr[arr.length - 1].substring(arr[arr.length - 1].length() - 1)
                .equals(String.valueOf(arr[0].charAt(0)))) {
            return false;
        }

        return true;
    }
}
