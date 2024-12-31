// for positive number only;
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"enter the number";
    cin>>n;
    int ans=0;
                                             // n is odd 100101  jo nit hogi &lene par vahi ayegi;
    int i=0;                                            //              &1
    while(n!=0){                                         //       =100101
       int bit=n&1;
          // bit=n%2;                                    //n&1 if n is odd n&1= 1    //n is even n&1 =0
       n= n>>1;           // n=n/2;           //right shift n>>1;
        ans=(pow(10,i)*bit)+ans;
        i++;
    }
cout<<"bits of "<<n<<" => "<<ans<<endl;
}
