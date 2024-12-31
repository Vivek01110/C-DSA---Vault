#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main(){
    
    int a[9]={2,7,4,9,1,2,3,1,13};
     int max=INT_MIN;             // int max=a[0];
    int min=INT_MAX;              //int min =a[0];
    for(int i=0;i<9;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min )
        min=a[i];
    }
    cout<<"maximum  element = " << max <<endl;
    cout<< "minimum element  = "<< min <<endl;
}