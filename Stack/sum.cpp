#include<iostream>
using namespace std;
int missing(int *arr , int n){
    int sum = 0;
    for(int i=0 ;i<n;i++){
             sum += arr[i];
    }
    return (n*(n+1)/2)-sum;
}
