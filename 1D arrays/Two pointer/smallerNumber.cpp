#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// find the number of element in arr1 smaller than arr2[i];    the arr1[j] < arr2[i];

int countsmaller(vector<int> arr1, vector<int >arr2){
   int i = 0;
   int j = 0;
   int countsmaller = 0;
   while(j < arr1.size() || i < arr2.size()){
        
        if(j == arr1.size() || (i < arr1.size() && arr1[i] <= arr2[j])){
             i++;
             countsmaller += j;
        }
        else {
            j++;
        }

   }
   return countsmaller;
}
int main(){
    vector<int> arr1 = {2,3,4,6,8,10};
    vector<int> arr2 = {3,5,6,7,8,10};

   sort(arr1.begin(), arr1.end());
   sort(arr2.begin(), arr2.end());
    

   cout << "total smaller numbers is : "<< countsmaller(arr1, arr2);

   }
     
