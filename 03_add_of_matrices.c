#include <stdio.h>
int main (){
    int m,n,i,j;
    printf("Enter the order of the matrices :");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat2[m][n],mat3[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element of mat1[%d][%d]",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element of mat2[%d][%d]",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\nThe sum of the two matrices is\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
    printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}