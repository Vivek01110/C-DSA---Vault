#include<iostream>
using namespace std;
    int mySqrt(int x) {
       int i=0;
       int j=x;
       long long int mid=i+(j-i)/2;
       int ans=-1;       
       while(i<=j){
           long long int square=mid*mid;
          if(square==x)
          return mid;
          else if(square<x){
          i=mid+1;
          ans=mid;
          }
          else
          j=mid-1;
          mid=i+(j-i)/2;
       }
       return ans;
    }
 
double fullsuqare(int n,int precision){
    int tempsol= mySqrt(n);
    double factor =1;
    int ans;
    for(int i=1;i<=precision;i++){
        factor/=10;
        for(int j=1;j<=10;j++){
             tempsol += factor;
             if(tempsol*tempsol==n){
                 ans=tempsol;
                break;
             }
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
   cout<<"squareroot of this number is = " << fullsuqare(n,3)<<endl;
}


// double fixedsquare(int x,int precision){
//     double factor=1;
//     double ans=sqrt(x);
//     for( int i=0;i<precision;i++){
//         factor=factor/10;
//         for(double j=ans;j*j<x;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }