#include<iostream>
using namespace std;
void rowsum(int arr[4][3]){
       for(int i = 0; i<4; i++){
          int sum = 0;
        for (int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"sum of "<<i<<" th row : "<<sum<<endl;
       }
}
int main(){
    int arr[4][3] = {
        {2,3,4},
        {5,3,4},
        {7,8,9},
        {4,6,4}
    };
    rowsum(arr);
}