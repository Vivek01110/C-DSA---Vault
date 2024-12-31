#include<iostream>
#include<vector>

using namespace std;
 int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int length = 1;
        for(int i=0;i<nums.size();i++){
                int j = i;
                while(nums[j] % 2 != nums[j + 1] % 2 && nums[j] <= threshold && j<nums.size()){
                    j++;
                }
                 length = j - i;
                if(maxl < length)
                    maxl = length;
            } 
        reutnr length;
        int mian (){
            int 
        }
        return length;
    }
int main(){
     vector<int>arr = {3,2,5,4};
    cout<<longestAlternatingSubarray(arr,4);
}