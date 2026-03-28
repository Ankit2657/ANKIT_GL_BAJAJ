#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
    printf("Enter the mark of sub1 subject : ");
    scanf("%f",&sub1);
    printf("Enter the mark of sub2 subject : ");
    scanf("%f",&sub2);
    printf("Enter the mark of sub3 subject : ");
    scanf("%f",&sub3);
    printf("Enter the mark of sub4 subject : ");
    scanf("%f",&sub4);
    printf("Enter the mark of sub5 subject : ");
    scanf("%f",&sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage=sum/5;
    printf("the sum and percentage of the marks are %f and %f ",sum,percentage);
    return 0;
}