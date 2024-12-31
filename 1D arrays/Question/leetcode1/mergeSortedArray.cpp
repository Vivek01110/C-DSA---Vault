
































// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = 0;
//         int j = 0;
//         int maxe = max(m,n);
//         int mine = min(m,n);
//         int x=0;
//         vector<int> newVector;
//         if(m==n){
//         while(x< 2*mine){
//             if(nums1[i] < nums2[j]){
//                 newVector.push_back(nums1[i]);
                
//                 i++; 
//             }
//             else {
//                 newVector.push_back(nums2[j]);
//                 j++;
//             }
//             x++;
            
//         }
//         }
//         else{
// while(x<mine){
//             if(nums1[i] < nums2[j]){
//                 newVector.push_back(nums1[i]);
//                 i++;
//             }
//             else {
//                 newVector.push_back(nums2[j]);
//                 j++;
//             }
//             x++;
            
//         }
//         for(int i=mine;i<maxe;i++){ 
//             if(maxe==m)
//                 newVector.push_back(nums1[i]);
//             else
//                 newVector.push_back(nums2[i]);
//         }
//         }
//         nums1=newVector;
//     }
// };
