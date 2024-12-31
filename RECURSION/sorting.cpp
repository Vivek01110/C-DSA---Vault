#include<iostream>
using namespace std;
int partition(int *a,int s,int e){
    int pivote = a[s];

    int cnt = 0;
    // equal  will also left side ;
    for(int i = s + 1; i <= e; i++)
        if(a[i]<=pivote) cnt++;
    
    int pvtindex = s + cnt;
    swap(a[s],a[pvtindex]);

    int i = s;
    int j = e;
    while(i<pvtindex  && j>pvtindex){
        while(a[i]<=pivote)
        i++;
        while(a[j]>pivote)
        j--;

       if(i<pvtindex  && j>pvtindex)
            swap(a[i++],a[j--]);    
    }
    return pvtindex;
}
void quickSort(int *arr, int s, int e){
    if(s>=e) return;

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

    return;
}
int main(){
    int arr[10] = {9,8,73,4,6,4,5,6,45,7};
    quickSort(arr,0,9);

    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}