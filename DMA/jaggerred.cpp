#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int **arr = new int*[size];
    int len;
    cout<<"enter the number of columns : "<<endl;
    for(int i=0 ;i<size;i++){
        cin>>len;
        arr[i] = new int [len+1];
        *arr[i] =len+1;   //store the length of each subarray in its first index;//*(int *)
    } 
    for(int i=0 ;i<size;i++){
        for(int j = 1;j<(*arr[i]);j++){  //len;
            cin>> arr[i][j];
        }
    }
    for(int i=0 ;i<size;i++){
        for(int j = 1;j<(*arr[i]);j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}