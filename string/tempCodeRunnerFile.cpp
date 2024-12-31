#include<iostream>
using namespace std;

char maxoccur(char str[]){
    int i=0;
    int max=0;
    while(str[i]='\0'){
        int count=0;
        char maxchar=str[i];
        int j=i+1;
        while(str[j]='\0'){
            if(str[j]==str[i]){
                count++;
            }
            if(max<count){
                max=count;
                maxchar=str[i];
            }
               j++;
        }
        i++;
    }
    return maxchar;
}
