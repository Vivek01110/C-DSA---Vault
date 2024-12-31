// unique number of occurence;
#include<iostream>
using namespace std;
// finding number of unique element;
int num(int a[],int n){
    bool found=true;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
             found=false;
        }
        count++;
    }
    return count;

        
    
}
//
bool unique(int a[],int n){
    int c[num(a,n)];
    for(int i=0,k=0;i<n-1 ,k<num(a,n);i++,k++){
        int count =0;
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
               count++;
               c[k]=count;
            }   
        }
    }

    int ans=0;
     for(int i=0;i<num(a,n);i++)
        ans=ans^c[i];
     if(ans==0) return false;
     else return true;
}

int main(){
int arr[6]={1,2,2,1,1,3};
if(unique(arr,10)==1){
cout<<"arr[6]={1,2,2,1,1,3} => true";
}
else{
cout<<"arr[6]={1,2,2,1,1,3} => false";
}
cout<<endl;
int brr[2]={1,2};
if(unique(arr,2)==1){
cout<<"brr[2]={1,2} => true";
}
else{
cout<<" brr[2]={1,2} => false";
}
}




// bool uniqueOccurrences(vector<int>& arr) {
//          int n=arr.size();
//          bool found=true;
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j])
//              found=false;
//              if(found)
//               count++;
//         }
//     }

//         int c[count];       
//     for(int i=0,k=0;i<n-1,k<count;i++,k++){
//         int counte =0;
//         for(int j=i;j<n;j++){
//             if(arr[i]==arr[j]){
//                counte++;
//                c[k]=counte;
//             }   
//         }
//     }

//     int ans=0;
//      for(int i=0;i<count;i++)
//         ans=ans^c[i];
//      if(ans==0) return false;
//      else return true;
//     }
// };