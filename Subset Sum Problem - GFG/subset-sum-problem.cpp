//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool subset(vector<int>arr,int n , int sum, vector<vector<int>>&dp){
        if(dp[n][sum]!=-1)return dp[n][sum];
        if(arr[n-1]<=sum){
            return dp[n][sum] =subset(arr, n-1,sum-arr[n-1],dp)||
            subset(arr, n-1,sum,dp);
        }else{
            return subset(arr, n-1,sum,dp);
        }
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i<=sum;i++){
            dp[0][i]=false;
        }
        for(int j = 0 ; j<=n ; j++){
            dp[j][0]=true;
        }
        return subset(arr,n,sum ,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends