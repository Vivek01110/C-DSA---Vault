#include<iostream>
#include<vector>
using namespace std;
bool Isprime(int n){
    for (int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
}



































// #include<iostream>
// using namespace std;
// bool Isprime(int n){
//     for (int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main (){
//     int count = 0;
//     int n;
//     for(int i=2;i<n;i++){
//         if(Isprime(i)){
//             count++;
//         }
//     }
//     return count;
// }