#include<iostream>
#include<math.h>
using namespace std;


void printnum(int x){
    int num = x * 1000;
    if(num == 0){
        cout << "0";
        return;
    }
    int digit = num%10;

    int t = 3;

    while(digit == 0){
        num = num/10;
        digit = num%10;
        t--;
    }
    float ans = num / pow(10,t);
    int ians = num / pow(10,t);
    if(ans*1000 == ians*1000){
       cout<< ians;
    }
    else
        cout << ans;
}
int main(){
    float x;
    cin >> x;
    
     printnum(x);
}