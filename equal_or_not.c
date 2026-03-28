#include<stdio.h>
int main(){
    int numa,numb;
    printf("Enter the 1st Number : ");
    scanf("%d", &numa);
    printf("Enter the 2nd Number : ");
    scanf("%d", &numb);
    if(numa==numb){
        printf("The entered number are equal");
    }
    else{
        printf("The entered number is not equal");
    }
    return 0;
}