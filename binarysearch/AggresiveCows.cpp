#include<iostream>
using namespace std;
bool IspossibleSol(int a[],int n,int c,int mid){
    int lastposition=a[0];
    int countcow=1;
      for(int i=0;i<n;i++){
        if(a[i]-lastposition>=mid){
            countcow++;
        }
        else{
            if(countcow>c)
              return true;
              lastposition=a[i];
        }
      }
      return false;
}


int AggressiveCows(int a[],int n,int c){      //c =>cows;
    int maxel=INT_MIN;
    int minel=INT_MAX;
    for(int i=0;i<n;i++){ //maxel element in the array;
        if(a[i]>maxel)
        maxel=a[i];
        if(a[i]<minel)
        minel=a[i];
    }

  int i = 0;
  int j = maxel-minel;
  int mid = i + (j - i)/2;
  int ans = -1;
  while(i<j){
        if(IspossibleSol(a,n,c,mid)){       //hame jyada ki taraf jana hai;
            ans=mid; 
           i=mid+1;
        }
        else
            j=mid-1;
        mid=i+(j-i)/2;
  }
   return ans;
       
} 
int main(){
    int a[5]={0,3,4,7,10};
    int c;
    cout<<"enter number of cows"<<endl;
    cin>>c;
    cout<<"the maximum distance betweeen the  min distance cow  is "<<AggressiveCows(a,5,c);
  cout<<"Thankyou Binary search for finding this solution";
}
