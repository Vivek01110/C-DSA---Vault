class Solution {
public:
    int compress(vector<char>& chars) {
      int i=0;
      int ansindex = 0;
      int n=chars.size();
      while(i<n){
        int j=i+1;
        while(chars[i]==chars[j] && j<n){
            j++;
        }
        chars[ansindex++]=chars[i];
        int count=j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansindex++]=ch;
            }
        }
         i=j;
      }
      return ansindex;
    }
};




















//  int compress(vector<char>& chars) {
//         int left = 0;
//         int right = 0;
//         int ansindex = 0;
//         for (int i = 0; i < chars.size(); i++) {
//             int count = 1;
//             while (chars[i] != chars[i + 1] && i < chars.size() - 1) {
//                 count++;
//                 i++;
//             }
//             chars[ansindex++] = chars[i];
//             left++;
//             right++;
//             if (count > 1) {
//                 char charcount; // convert count into char
//                 if (count < 10 && count > 1) {
//                     charcount = count + '0';
//                     chars[ansindex++] = charcount;
//                     right++; // no reversse will perform;
//                     left++;
//                 } else {
//                     while (count != 0) {
//                         int digit = count % 10;
//                         count = count / 10;
//                         charcount = digit + '0';
//                         chars[ansindex++] = charcount;
//                         right++;
//                     }
//                     reverse(chars.begin() + left, chars.begin() + right);
//                 }
//             }
//         }
//         chars.erase(chars.begin()+(--ansindex),chars.end());
//         return chars.size();










//   int compress(vector<char>& chars) {
//         string s = ""; 
//              int left = 0;
//             int right = 0;
//         for (int i=0;i<chars.size();i++){
//             int count = 1;
//             while(chars[i]!=chars[i+1] && i<chars.size()-1){
//                   count++;
//                   i++;
//             }
//             s.push_back(chars[i]);
//             left++;
//             right++;
//             char charcount= count +'0';  //convert count into char
//             if(count<10 && count>1){
//                 s.push_back(charcount);
//                 right++;  //no reversse will perform;
//                 left++;
//             }
//             else{
//                 while(count!=0){
//                     int digit = count % 10;
//                     count = count/10;
//                     s.push_back(digit);
//                     right++;
//                 }
//                reverse(s.begin()+left,s.begin()+right);
//             }
//         }
//         chars.erase(chars.begin(),chars.end());
//         return s.size();
        
//     }