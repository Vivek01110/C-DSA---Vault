/* 1 2 3
   4 5 6
   7 8 9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and cloumn";
    cin>>n;

    int i=1;
    int j=1;
    while(i<=n){
        while(j<=n*i){
            cout<<j<<" ";
            j++;
        } 
        cout<<endl;
        i++;
    }
}
*/

/*
1
2 3
3 4 5
4 5 6 7*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and cloumnm:";
    cin>>n;

    int i=1;
    int j=1;
    
    while(i<=n){
       
         int j=i;
        while(j<=2*i-1){
            cout<<j<<" ";
           
            j++;
            
        }
        cout<<endl;
        i++;
    }
}*/


/*
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and cloumnm:";
    cin>>n;

    int i=1;
    
    
    while(i<=n){
       
        //  int j=i;
        // while(j>=1){
        //     cout<<j<<" ";
           
        //     j--;
            
        // }
        int j=1;
        while(j<=i){
            cout<<i+1-j;
            j++;
        }
        cout<<endl;
        i++;
    }
}

/*
3 2 1
4 3 2           // cout<<n-(i+j-2);
5 4 3
*/
/*
1 2 3
2 3 4         //cout<<i+j-2;
3 4 5
*/



































