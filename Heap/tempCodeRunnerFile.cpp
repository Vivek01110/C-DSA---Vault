#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float x;
    cin >> x;

    int num = x * 1000;
    if(num == 0){
        cout << "0";
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
    if(ans*10 == ians*10){
       cout<< ians ;
    }
    else
        cout << (float)(num / pow(10,t));
}