

// *Approach :*

// 1. Initialize two empty vector  to store row and col index of zero;
// 2. Store the indexes of zero in row_index and col_index;
// 3. Change the value of elements to zero of row and col, having atleast one zero;


// *code :*

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>row_index = {};
        vector<int>col_index = {};
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                     cnt++;
                     row_index.push_back(i); 
                     col_index.push_back(j);
                }
            }
        }
        for(int i=0;i<cnt;i++){
            // row zero fill
                int r_index = row_index[i];
                for(int k = 0;k<n;k++)
                    matrix[r_index][k] = 0;
                
            //  col zero fill
                int c_index = col_index[i];
                for(int k = 0;k<m;k++)
                    matrix[k][c_index] = 0;      
        }
    }
}; 


// T.C  = O(m*n)
// S.C  = O(k) 
 // let k is the number of zero in matrix