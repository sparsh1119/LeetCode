class Solution {
public:
    
    bool ispalindrome(string str){
        int i = 0;
        int j = str.length()-1;
        
        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++){
            if(ispalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};