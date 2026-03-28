#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,SI,amount,CI;
    printf("Enter the principal : \n");
    scanf("%f",&principal);
    printf("Enter the rate : \n");
    scanf("%f",&rate);
    printf("Enter the time : \n");
    scanf("%f",&time);
    SI = (principal*rate*time)/100;
    amount=principal*pow((1+(rate*time)/100),time);
    CI =amount-principal;
    printf("the SI is %f and CI is %f ",SI,CI);
    return 0;
}