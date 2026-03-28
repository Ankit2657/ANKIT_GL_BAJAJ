#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the 1st number :\n");
    scanf("%d",&a);
    printf("Enter the 2nd number:\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swaoed variables are a : %d and b : %d \n",a,b);
    return 0;
}