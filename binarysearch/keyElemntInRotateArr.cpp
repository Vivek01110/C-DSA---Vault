#include<iostream>
using namespace std;
int minpivote(int a[],int n){
    int i=0;
    int j=n-1;
    int mid=i+(j-i)/2;
    while(i<j){
        if(a[mid]>=a[0]) //because minimum to a[0] se chota hoga;
            i=mid+1;
            else
            j=mid;
            mid=i+(j-i)/2;
    }   
    return i;//return j;
    }
int binary(int a[],int s,int e,int key){
    int i=s;
    int j=e-1;
    int mid =i+(j-i)/2;
    while(i<j){
        if(key==a[mid])
        return mid;
        else if(key>a[mid])
        i=mid+1;
        else
        j=mid-1;
    }
    return -1;

}  
int SearchKey(int a[],int n,int key){
        int pivote=minpivote(a,n);
    if(key<=a[n-1]  && key>=a[pivote])
        return binary(a,pivote,n-1,key);
    else
    return binary(a,0,pivote-1,key);
         
}
int main(){
    int a[8]={12,13,14,15,2,3,4,5};
    int key;
    cout<<"enter the numebr to search = ";
    cin>>key;
    cout<<SearchKey(a,8,key);
}