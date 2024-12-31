#include<iostream>
using namespace std;
peekindex(int a[],int n){
    int i=0;
    int j=n-1;
    int mid=i+(j-1)/2;
    

    while(i<j){
        if(a[mid]>a[mid-1] &&a[mid]>a[mid+1])
        return mid;
        else if(a[mid+1]>a[mid-1])
        i=mid+1;
        else
        j=mid-1;

        mid=i+(j-i)/2;  
    }
    return -1;
 
}
int main(){
    int a[10]={1,3,5,6,7,8,3,1,1,0};
    cout<<"this is the peek index "<<peekindex(a,10)<<endl;

}