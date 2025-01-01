#include<iostream>
using namespace std;
int main(){
    // int arr[5] = {2,7 ,4,5,6};

    // cout<<"adreess of array : "<<arr<<endl;
    // cout<<"adress of first ele : "<<&arr[0]<<endl;

    // cout<<"the value of first index  : "<<*arr<<endl;  // *arr = value of the first index = 2;
    // cout<<"the value of first index  : "<< *arr + 1 <<endl; //*arr + 1 = val at first index  +  1 = 3


    // cout<<"the value of second  index  : "<< *(arr + 1) <<endl; // *(arr + 1) = 3;


    // cout<<"the value of second  index  : "<< 2[arr] <<endl; // *(2 + arr) = 4;




// deffrence  between arr and pointer;

// 1. size
//  int temp[5]={4,6,7,3,2};
//  cout <<"size of arr : "<<sizeof(temp)<<endl;  //number of element x 4 byte
//  cout <<"val of arr : "<<sizeof(*temp)<<endl; // 4 byte;
//  cout <<"size of adress 1st index : "<<sizeof(&temp[0])<<endl; //  8 byte;  //adress of first index;

//  int *p = &temp[0];
//  cout<<sizeof(p)<<endl;
//  cout<<sizeof(*p)<<endl;
//  cout<<sizeof(&p)<<endl;



// 2.sybol table cant change  in arrra
int arr[10] = {1,2,3,4,0,0,0,0,0,0}; 
//  ERROR
// arr = arr + 1;

int *ptr = &arr[0];
  ptr = ptr + 1;
  cout<<*ptr;
  


}