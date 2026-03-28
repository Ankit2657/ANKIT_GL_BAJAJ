#include<stdio.h>
int main(){
    int n ,esum=0,osum=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    for(int i=1 ;i<=n;i++)
    {
        if(i%2==0){
            esum=esum+i;
        }
        else{
            osum=osum+i;
        }
    }
    printf("Sum of even num is : %d\n",esum);
    printf("Sum of odd num is : %d\n",osum);
    return 0;
}