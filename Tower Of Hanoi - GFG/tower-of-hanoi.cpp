//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    long long count =0 ;
    void TOHhelper(int N , int from , int to , int aux){
        if(N>0){
            TOHhelper(N-1, from , aux ,to);
            cout<<"move disk " << N << " from rod "<< from << " to rod " << to <<endl;
            count++;
            TOHhelper(N-1,aux,to , from);
        }
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        TOHhelper(N,from,to,aux);
        return count;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends