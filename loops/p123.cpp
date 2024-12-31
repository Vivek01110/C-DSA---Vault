//1 1 1 1
// 2 2 2
// 3 3
// 4
// best question
// #include<iostream>

// using namespace std;
// int main(){
//     int n;
//     cout<<"etner the nnumber of rows of coulumn;";  
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i+1){
//         cout<<i;
//         j++;
        
//         }
//         cout<<endl;
//         i++;
//     }
//     }


/*
1 2 3
2 3 4       //j=i; j<=i+2; 2=3-1;
3 4 5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"etner the nnumber of rows of coulumn;";  
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=i+n-1){
        cout<<j;
        j++;
        }
        cout<<endl;
        i++;
    }
    }


