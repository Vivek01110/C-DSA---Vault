#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    cout<<"a&b =>"<<(a&b) <<endl;  //a aur b ke bits par & laga hai;
    cout<<"a|b =>"<<(a|b )<<endl;
    cout<<"~a =>"<<~a <<endl;
    cout<<"a^b =>"<<(a^b) <<endl;  //xor;

    cout<<(12<<1)<<endl; //left shift me jitna shift karna ho utni baar 2se multyply kar do ; exception => 01000000101  negative ho raha hai;
    cout<<(13<<2)<<endl;

    cout<<(18>>1)<<endl; //right shift me 2 se divide ;
    cout<<(32>>2)<<endl;


 
  if(a&1){ 
    //a&1 agar 1 hai to condition true aur if ke andar jaa sakate hai ;
    //a&1 agar 0 hai to condition false aur if ke andar  nahi jaa sakate hai ;      
    cout<<"enter the number";
  }


  
    


}