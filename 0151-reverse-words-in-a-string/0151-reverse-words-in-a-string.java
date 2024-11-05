class Solution {
    public String reverseWords(String s) {
        String[] words = s.split("\s+");
        StringBuilder res = new StringBuilder();

        for(int i = words.length-1 ; i>=0 ; i--){
            if(words[i].equals(" ")) continue;
            res.append(words[i]).append(" ");
        }

        return res.toString().trim();
    }
}