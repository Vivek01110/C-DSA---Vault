#include<iostream>
using namespace std;
void printlikewave(int arr[5][5]){
    int r=5;
    int c=5;
    for(int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            if(i%2!=0)
                cout<<arr[j][i]<<" ";
            else
                cout<<arr[r-j-1][i]<<" "; 
        }
    }
}
int main(){
    int arr[5][5]{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {12,23,23,12,34},
        {23,34,23,5,78}

    };
    printlikewave(arr);

}