/*
A
B B 
C C C
D D D D
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n;";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        
       while(j<=i){
         char ch='A'+i-1;
      cout<<ch;
      j++;
       }
    cout<<endl;
    i++;
    }
}
*/

/*
A
B C
C D E
D E F G
E F G H I
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n;";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
        
//        while(j<=i){
//      char ch='A'+i+j-2;
//      //WE have to -2 because i wil print increase
//  // ascii value of 'A andit will print 'B at first line 
//       cout<<ch;
//       j++;
//        }
//     cout<<endl;
//     i++;
//     }
// }

/*
D
C D
B C D           //ch=n-('A'+i+j-2);   cout<<ch;  it will print 'C';
A B C D         //ch=n-'A'-i-j+2+1;

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n;";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
       while(j<=i){
         cout<<ch;
         ch++;
      j++;
       }
    cout<<endl;
    i++;
    }
}
