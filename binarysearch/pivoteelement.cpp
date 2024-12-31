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
    int maxpivote(int a[],int n){
        int i=0;
        int j=n-1;
        int mid=i+(j-i)/2;
        while(i<j){
            if(a[mid]>=a[n-1])
            i=mid+1; //dry run =>{7,8,9,1,2,3,4,5,6,7}
            else 
            j=mid;
            mid=i+(j-i)/2;
        }
        return i;
    }
    int main(){
        int a[8]={12,13,14,15,1,2,4,5};   //here 1 is the pivote elment minimum of second series;
       cout<<"minimun pivote index is " <<minpivote(a,8)<<endl;
       cout<<"maximum pivote index is " <<maxpivote(a,8)<<endl;
     int  b[10]={7,8,9,1,2,3,4,5,6,7};
     cout<<"maximum pivote index is " <<maxpivote(b,10)<<endl;
    }
