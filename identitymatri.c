#include<stdio.h>

int main(){
    int n;
    printf("Enter tha no of row/colomn=");
    scanf("%d",&n);
    int a[n][n];
    int check=1;
    printf("Enter the elements of tha array :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
           
        if((i==j && a[i][j]==1) || (i!=j && a[i][j]==0))
       
      check=0;
      
       
    }
    }
   if(check==0){
    printf("yes");
   }
   else{
    printf("no");
   }
    return 0;
}