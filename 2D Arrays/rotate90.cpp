// if k =1 //k is the number of times of rotation(clock wise); 
//if(k%4==3)

// for(int i=0;i<r;i++){
//             for(int j=i;j<c;j++){
//                     swap(matrix[i][j],matrix[j][i]);
//             }
//             // reverse(matrix[i].begin(),matrix[i].end());
//         }
//         for(int i=0;i<r;i++){
//              reverse(matrix[i].begin(),matrix[i].end());
//         }







// k = 1 ;
// 1.transpose
// 2.row reverse



//  k = 2;        //if(k%4==3)  

// 1.row revrere;
// 2.column reverse;



// k=3       //if(k%4==3)

// transpose ;
// column reverse ;
// on the basis of 










// rotate the matrix by left k times;


// class Solution {
//   private : 
//         void transpose(vector<vector<int>>& mat){
//             for(int i=0;i<mat.size();i++){
//                 for(int j=i;j<mat[0].size();j++){
//                     swap(mat[i][j],mat[j][i]);
//           }
//       }
//   }
//   private : 
//         void col_reverse(vector<vector<int>>& mat){
//             for(int i=0;i<mat[0].size();i++){
//                 for(int j=0;j<mat.size()/2;j++){
//                     swap(mat[j][i],mat[mat[0].size()-1-j][i]);
//                }
//             }
//         }
//   private : 
//         void row_reverse(vector<vector<int>>& mat){
//             for(int i=0;i<mat.size();i++){
//                 reverse(mat[i].begin(),mat[i].end());
//             }
//   }
//   public:
//     vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
//         if(k%4 == 0) return mat;
        
//         else if(k%4 ==1){
//             row_reverse(mat);
//             transpose(mat);
//         }
//         else if(k%4 ==2){
//             col_reverse(mat);
//             row_reverse(mat);
//         }
//         else {
//             transpose(mat);
//             row_reverse(mat);
//         }
//         return mat;
            
//     }
// };