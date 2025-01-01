 #include<iostream>
 #include<vector>
 #include<deque>
 using namespace std;

 int  sum_min_max_of_subarrays(int *arr, int n, int k)
    {
      deque<int>maxi;
      deque<int> mini;
      
      int ans = 0;
      
      
      for(int i=0;i<k;i++){
          
           while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
               maxi.pop_back();
           }
           
           while(!mini.empty()  && arr[mini.back()] >= arr[i]){
               mini.pop_back();
           }
           
           maxi.push_back(i);
           mini.push_back(i);
           
      }
      
      for(int i=k; i<n ;i++){
          
          ans += maxi.front() + mini.front();
        //   removing elment
          while(i-maxi.front() >= k){
              maxi.pop_front();
          }
          
          while(i - mini.front() >= ){
              mini.pop_front();
          }
          
          //addinfg nnew element in hindi
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
               maxi.pop_back();
           }
           
           while(!mini.empty()  && arr[mini.back()] >= arr[i]){
               mini.pop_back();
           }
           
           maxi.push_back(i);
           mini.push_back(i);
      }
      ans += maxi.front() + mini.front();
      
      return ans;
    }
