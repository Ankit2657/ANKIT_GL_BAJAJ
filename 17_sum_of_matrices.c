#include<stdio.h>
int main(){
    int i,j,rows,cols;
    printf("Enter The No. of rows and cols :");
    scanf("%d%d",&rows,&cols);
    int A[rows][cols],B[rows][cols],C[rows][cols];
    printf("Enter element of 1st matrix\n");
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    scanf("%d",&A[i][j]);
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    scanf("%d",&B[i][j]);
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    C[i][j]=A[i][j]+B[i][j];
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    printf("%d\n",C[i][j]);
    return 0;
}