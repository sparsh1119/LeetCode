vector<int>dp(101,-1);
class Solution {
public:
    int n =0;
    int numDecodeHelp(string s, int pos){
        
        //basecase
        if(pos==n) return 1;
        if(s[pos]=='0') return 0;
        
        if(dp[pos]!= -1) return dp[pos];
        
        int count = numDecodeHelp(s,pos+1);
        if(pos<n-1 && s.substr(pos,2)<"27"){
            count += numDecodeHelp(s,pos+2);
        }
        
        return dp[pos]= count;
    }
    
    int numDecodings(string s) {
        n = s.size();
        fill(dp.begin(),dp.end(),-1);
        return numDecodeHelp(s,0);
    }
};