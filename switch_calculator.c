#include <stdio.h>
int  main (){
    int num1,num2,result=0;
    char op;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    printf("Enter the num2 :");
    scanf("%d",&num2);
    printf("Enter the operator :");
    scanf(" %c",&op);
    switch (op){
        case'+':result=num1+num2;
        break; 
        case'-':result=num1-num2;
        break; 
        case'*':result=num1*num2;
        break; 
        case'/':result=num1/num2;
        break;
        default:printf("chose the correct operator");
        return 0;
        break; 
    }
    printf("%d",result);
    return 0;
}