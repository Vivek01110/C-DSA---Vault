#include<iostream>
using namespace std;
void merge(int *arr ,int s ,int e){
     int mid = (s+e)/2;
// 1.  make two  new arrays  
     int len1 = mid-s+1;
     int len2=e-mid;

     int *first = new int[len1];
     int *second = new int[len2];

// 2.copy values from left and right parts;
   int k = s;
   for(int  i = 0; i<len1; i++){
      first[i] = arr[k++];
   }
   k=mid+1;
   for(int i=0;i<len2;i++){
      second[i]=arr[k++];
   }

// 3.merge two sort arrays 
   int i = 0;
   int j = 0;
   int mindex=s; //main arrays ka index;

   while(i<len1 && j<len2){
        if(first[i]<second[j]){
           arr[mindex++] = first[i];
           i++;
        }
        else {
            arr[mindex++] = second[j];
            j++;
        }

   }
   while(i<len1){
      arr[mindex++] = first[i++];
   }
   while(j<len2){
       arr[mindex++] = second[j++];
   }
   delete []first;
   delete []second;
}

    void merge_sort(int *arr ,int s,int e){
        int mid =(s+e)/2;
        if(s>=e){
            return ;
        }
        // for left part 
        merge_sort(arr,s,mid);
    //    for rigt part
      merge_sort(arr,mid+1,e);
//merge
      merge(arr,s,e);

    }

    int main(){
        int arr[8]={9,8,7,5,6,4,2,2};
        merge_sort(arr,0,7);

        for(int i=0;i<8;i++){
            cout<<arr[i]<< " ";
        }
    }

    
















// #include<iostream>
// using namespace std;
// void merge(int *arr,int s ,int e){
//     int mid = (s+e)/2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     // make two arrays;
//     int *first  = new int[len1];
//     int *second = new int[len2];


// //    copy values from left and right part;
//     int k = s;
//     for(int i=0;i<len1;i++){ 
//        first[i] = arr[k++];
//     }
//     k= mid+1;
//     for(int i=0;i<len2;i++) {
//          second[i] = arr[k++];  
//     }  

//     int i = 0;
//     int j = 0;
// int mindex = s;
//     while(i<len1 && j<len2){
//         if(first[i]<second[j]){
//             arr[mindex++] = first[i];
//             i++;
//         }
//         else {
//             arr[mindex++] = first[j];
//             j++;
//         }
//     }
//     while(i<len1){
//          arr[mindex++] = first[i++];
//     }

//    while(j<len2){
//          arr[mindex++] = second[j++];
//    }
// }
// void mergeSort(int *arr,int s,int e){ 
//     int mid =(s+e)/2;
//     if(s>=e)
//      return;
//     // for left part;
//     mergeSort(arr,s,mid);
//     // for right part;
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);
// }
// int main(){
//     int arr[6] = {4,6,5,7,4,3};
//     mergeSort(arr,0,5);

//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

// }
















































// void merge(int *arr,int s ,int e){
//     int mid = s+(e-s)/2;
//     int len1 = mid-s+1;
//     int len2 = e-mid;
//     int *first  = new int[len1];
//     int *second = new int[len2];
//     int index = s; 
//     for(int k=0 ;k<len1;k++)
//         first[k] = arr[index++];
//     for(int k=0 ;k<len2;k++)
//         first[k] = arr[index++];
//     // merge two sorted ARRAY;
//     int i = 0;
//     int j = 0;
//     int mindex = s;
//     while(i<len1 && j<len2){
//         if(first[i]<first[j])
//              arr[mindex++] = first[i++];
//         else
//             arr[mindex++] = second[j++];  
//     }
//     while(i<len1)
//         arr[mindex++] = first[i++];
//     while(j<len2)
//         arr[mindex++] = second[j++];
//         return;
// }
// void mergeSort(int *arr,int s,int e){
//     if(s>=e)
//     return ;
//     int mid = s + (e - s)/2;
//     mergeSort(arr,s,mid);
//    mergeSort(arr,mid+1,e);
//     merge(arr,s,e);
// }
// int main(){
//     int arr[10] = {1,2,3,6,4,2,67,9,5,3};
//     mergeSort(arr,0,9);
//     for(int i=0 ;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }