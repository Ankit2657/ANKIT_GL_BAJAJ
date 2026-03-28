#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to be checked : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number entered is even");
    }
    else{
    printf("The number entered is odd");
}
    return 0;
}