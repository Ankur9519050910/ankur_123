#include<stdio.h>
#include<limits.h>
 typedef struct sparse{
   int row;
   int col;
   int val;
   }sparse;
   void dis( struct sparse matrix[],int c){
          printf("The reprasentation of the sparse matrix\n");
           for(int i=0;i<c;i++){
             printf("%d\t%d\t%d\n",matrix[i].row,matrix[i].col,matrix[i].val);
             }
             }

 int main(){
    int n;
     printf("Enter the row of the matrix=");
      scanf("%d",&n);
      int m;
      printf("Enter the column of the matrix=");
        scanf("%d",&m);
        int a[n][m];
        printf("Enter the elements of the array: \n");
          for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
 }
 }
       //   count the non zero elements 
        int c=0;
         for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(a[i][j]!=0){
               c++;
               }
               }
               }
       // stored the non zero elements
        sparse matrix[c];
        int k=0;
         for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             if(a[i][j]!=0){
                matrix[k].row=i;
                matrix[k].col=j;
                matrix[k].val=a[i][j];
                k++;
                }
                }
                }
              
               dis( matrix,c);
                
 }
 
