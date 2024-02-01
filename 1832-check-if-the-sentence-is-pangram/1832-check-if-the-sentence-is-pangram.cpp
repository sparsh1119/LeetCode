class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        for(int i =0 ; i<sentence.length() ; i++){
            if((sentence[i]>='a' && sentence[i]<='z') || (sentence[i]>='A' && sentence[i]<='Z')){
                char ch = sentence[i];
                arr[ch - 'a'] = 1;
            }
        }
        
        for(int i = 0 ; i <26 ; i++){
            if(arr[i] == 0 ) return false;
        }
        return true;
    }
};