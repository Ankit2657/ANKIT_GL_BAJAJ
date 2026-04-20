#include<stdio.h>
int main(){
    int a,b=0;
    printf("Enter the num :");
    scanf("%d",a);
    if (a<=1){
        b=1;
    }
    for(int i;b<=a;i++){
        if (a%i){
            b=1;
            break;
        }
    }
    return 0;
}