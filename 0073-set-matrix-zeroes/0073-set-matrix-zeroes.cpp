class Solution {
public:
    
    void MarkRow(int i , int n,vector<vector<int>>& matrix){
        for(int j = 0 ; j<n ; j++){
            if(matrix[i][j]!=0){
                matrix[i][j]='*';
            }
        }
    }
     void MarkColumn(int j,int m,vector<vector<int>>& matrix){
        for(int i = 0 ; i<m ; i++){
            if(matrix[i][j]!=0){
                matrix[i][j]= '*';
            }
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        
        for(int i = 0 ; i<m ; i++ ){
            for(int j = 0 ; j<n ; j++ ){
                if(matrix[i][j]==0){
                    MarkRow(i,n,matrix);
                    MarkColumn(j,m,matrix);
                }
            }
        }
        
        for(int i =0 ; i<m; i++){
            for(int j =0 ; j<n ; j++){
                if(matrix[i][j] == '*'){
                    matrix[i][j]=0;
                }
            }
        }
    }
};