#include<stdio.h>
int main(){
    int r;
    printf("enter a= number of rows");
    scanf("%d",&r);
    
    for(int i=1;i<=r;i++){
        char ch='A';
        for(int j=1;j<r-i+1;j++)
        printf(" ");
        
        for(int j=1;j<i+1;j++){
        ch='A'+j-1;
        printf("%c",ch);
        }
        if(i>1){ 
        for(int k=i-1;k>=1;k--){
            ch='A'+k-1;
             printf("%c",ch);
        }
        }
         printf("\n");
    }
}
