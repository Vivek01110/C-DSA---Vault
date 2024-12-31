/*
A B C
D E F
G H I
*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i=1;
   char ch='A';
    while(i<=n){
          int j=1;         
          while(j<=n){          
            // cout<<ch;
            cout<<ch<<" ";
            ch++;
         //ch++;
            j++;
          }
          cout<<endl;       
          i++;    
    }    
}
*/

/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i=1;
  
    while(i<=n){
         int j=1;         
          while(j<=n){          
            char ch='A'+i+j-2;
            cout<<ch;
            j++;
          }
          cout<<endl;        
          i++;    
    }    
}

