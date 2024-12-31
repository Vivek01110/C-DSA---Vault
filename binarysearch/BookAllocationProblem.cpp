#include<iostream>
using namespace std;
bool IsPossibleSol(int a[],int n,int m, int mid){
    int pagesum=0;
    int studentcount=1;
     for(int i=0;i<n;i++){
        if(pagesum+a[i]<=mid)
        pagesum+=a[i];
        else{
            studentcount++;
            if(studentcount>m || a[i]>mid)
                return false;
         pagesum=a[i];
        }
     }
     return true;
}

int BookAllocate(int a[],int n,int m){
   
    int maxpage=0;
    for(int i=0; i<n; i++)
        maxpage+=a[i];

    int i=0;
    int j=maxpage;
    int mid=i+(j-i)/2;
    int ans=-1;
    while(i<j){
        if(IsPossibleSol(a,n,m,mid)){ 
            ans=mid;
            j=mid-1;          //trying to find minimum pages as it can be; //kam se kam page milien us bachhe ko jise un bachho me sabse jadad page mile hai;
            
        }
        else{
            i = mid + 1;
        }
        mid=i+(j-i)/2;
    }
     return ans;

}
int main(){
    int a[4]={12, 34, 67, 90};
    int m; //no of student 
   cout<<"minimum pages given to a student who has got max page among them  :" <<BookAllocate(a,4,2);
}