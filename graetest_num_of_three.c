#include <stdio.h>
int main() {
    int firstnum, secondnum, thirdnum;

    printf("Enter first number : ");
    scanf("%d", &firstnum);

    printf("Enter second number : ");
    scanf("%d", &secondnum);

    printf("Enter third number : ");
    scanf("%d", &thirdnum);

    if (firstnum > secondnum && firstnum > thirdnum)
    {
        printf("The biggest number is %d\n", firstnum);
    } 
    else if (secondnum > firstnum && secondnum > thirdnum)
    {
        printf("The biggest number is %d\n", secondnum);
    }
     else 
    {
        printf("The biggest number is %d\n", thirdnum);
    }

    return 0;
}