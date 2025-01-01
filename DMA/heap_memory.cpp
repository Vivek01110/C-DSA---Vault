#include<iostream>
using namespace std;
int Getsum(int *arr ,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    cout<<"Enter the size of array : " << endl;
    int n;
    cin >> n;
    int *arr = new int[n];  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<Getsum(arr, n);
    


}
