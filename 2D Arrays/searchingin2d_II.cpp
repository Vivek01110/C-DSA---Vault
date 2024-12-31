
// square approach 
// 75 test case pass;
// [[-5]] ==> Fail
// 

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sr = 0;
        int er = matrix.size()-1;
        int sc = 0;
        int ec = matrix[0].size()-1;
        int mr = sr + (er-sr)/2;
        int mc = sc + (ec-sc)/2;
        while(sr<er && sc<ec){
            if(target==matrix[mr][mc]){
                return true;
            }
            else if (target<matrix[mr][mc]){
                ec = mc;
                er = mr;
            }
            else {
                sr = mr + 1;
                sc = mc + 1;
            }
            mr = sr + (er-sr)/2;
            mc = sc + (ec-sc)/2;  
        }
         return false;
    } 