#include<stdio.h>
int main(){
    float f ,c;
    printf("Enter the temperatur in degree centigrade :");
    scanf("%f",&c);
    f=32+9*c/5;
    printf("the temperature in fahrenhit %f \n",f);
    return 0;
}