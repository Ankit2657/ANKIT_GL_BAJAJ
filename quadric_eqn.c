#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a from quadratic eqn : ");
    scanf("%d",&a);
    printf("Enter the value of b from quadratic eqn : ");
    scanf("%d",&b);
    printf("Enter the value of c from quadratic eqn : ");
    scanf("%d",&c);
    float d=b*b-4*a*c;
    float e=sqrt(d);
    float f=-b+e/2*a;
    float g=-b-e/2*a;
    if(d<0){
        printf("The roots are imaginary\n");
        
    }
    else
    {
    printf("The root x1 is : %f",f);
    printf("The root x2 is : %f",g);
    }
    return 0;
}