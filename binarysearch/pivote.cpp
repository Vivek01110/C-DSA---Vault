#include<iostream>
using namespace std;
 int pivoteindex(int a[],int n){
    int i=0;
    int j=n-1;
    int mid=i+(j-i)/2;
    int lsum=0;
    int rsum=0;
    while(i<j){
        for(int i=0;i<mid;i++)
        lsum+=a[i];
        for(int i=mid+1;i<n;i++)
        rsum+=a[i];
        if(lsum<rsum)
      
    }
}

































// #include<iostream>
// using namespace std;
// int pivote(int num[],int n){
//     int i=0;
//     int j=n-1;
//     int lsum=0;
//     int rsum=0;
//      int mide=i+(j-i)/2;
//         for(int k=0;k<mide;k++)
//         lsum+=num[k];
//         for(int k=mide+1;k<n;k++)
//         rsum+=num[k];
//     while(i<j){
//         if(lsum==rsum)
//         return mide;
//         else if(lsum<rsum){
//         i++;
//         lsum+=mide;
//         rsum=rsum-num[mide+1];
//         }
//          else if(lsum>rsum){
//       j--;
//       rsum+=mide;
//       lsum=lsum-num[mide-1];
//     }
//      mide=i+(j-i)/2;
// }
//  return -1;
// }
// int main(){
//     int num[6]={1,7,3,6,5,6};
//    cout<<"pivote index is : "<<pivote(num,6)<<endl;
// }


// int pivotIndex(vector<int>& nums) {
//         int i=0;
//     int j=nums.size()-1;
//     int lsum=0;
//     int rsum=0;
//      int mid=i+(j-i)/2;
//         for(int k=0;k<mid;k++)
//         lsum+=nums[k];
//         for(int k=mid+1;k<nums.size();k++)
//         rsum+=nums[k];
//     while(i<j){
//         if(lsum==rsum)
//         return mid;
//         else if(lsum<rsum){
//         i++;
//         lsum+=mid;
//         rsum=rsum-nums[mid+1];
//         }
//          else if(lsum>rsum){
//       j--;
//       rsum+=mid;
//        lsum=lsum-nums[mid-1];
//     }
//      mid=i+(j-i)/2;
   
// }
//  return -1;