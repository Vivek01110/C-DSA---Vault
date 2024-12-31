#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter amount of notes = ";
    cin >> n;
    int note =500;
    switch(note){
             
             case 500: 
                cout<<"number of  500 notes are "<<n/500 <<endl;
            //   break;

            n=n%500;
            case 100 : 
                cout<<"number of  100 notes are "<<n/100 <<endl;
    
        
            n=n%100;
            case 50 : 
                cout<<"number of  50 notes are "<<n/50 <<endl;
              
            
            n=n%50;
            case 20 :
                cout<<"number of  20 notes are "<<n/20 <<endl;
              
            
            n=n%20;
            case 10:
                cout<<"number of  10 notes are "<<n/10 <<endl;
              
             
              n=n%10;  
            case 5:
                cout<<"number of  5 notes are "<<n/5 <<endl;
              
             
            n=n%5;  
            case 2:
                cout<<"number of  2 notes are "<<n/2 <<endl;
              
               
            case 1:
                cout<<"number of  1 notes are "<<n<<endl;
              
    }
}


