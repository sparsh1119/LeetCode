class Solution {
    public long minimumSteps(String s) {
        int n = s.length();
        int last = 0; // Tracks the number of '0's encountered so far (or the expected position of each '0').
        long swapCount = 0; // Stores the total number of swaps required.

        for (int cur = 0; cur < n; cur++) {
            if (s.charAt(cur) == '0') {
                // Imaginary swaps to bring '0' to its correct position.
                swapCount += (cur - last);
                last++; // Update the expected position for the next '0'.
            }
        }

        return swapCount;
    }
}