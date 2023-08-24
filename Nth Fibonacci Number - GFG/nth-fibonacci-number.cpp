//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        if(n==0) return 0;
        int mod=1e9+7;
        
        int a=0,b=1;
        
        n-=2;
        
        while(n-->=0)
        {
            int c=(a%mod+b%mod)%mod;
            a=b;
            b=c;
        }
        
            return b;
    }
};
// vector<long long int>dp(1001,-1);
// class Solution {
//   public:
  
//     // int mod =1e9 +7;
//     // int nthFibonacci(int n){
//     //     // code here
//     //     if(n<=1)return n;
        
//     //     return (nthFibonacci(n-1)%mod+nthFibonacci(n-2)%mod)%mod;
//     // }
    
//     //dp approch
//     int mod =1e9 +7;
//     long long int nthFibonacci(long long int n){
        
//         if(dp[n]!=-1){
//             return dp[n];
//         }
        
//         if(n<=1){
//             return dp[n]=n;
//         };
        
//         return dp[n]= (nthFibonacci(n-1)%mod+nthFibonacci(n-2)%mod)%mod;
//     }
// };

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends