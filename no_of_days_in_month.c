#include<stdio.h>
int main(){
    int month;
    printf("Enter the month : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("\n 31 Day in the month \n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("\n 30 Day in the month \n");
    break;
    case 2:
    printf("\n 28 or 29 Day in the month \n");
    break;
    default:
    printf("\n please eneter the valid month between 1 to 12 \n");
    }
    return 0;
}