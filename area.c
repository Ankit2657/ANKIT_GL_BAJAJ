#include<stdio.h>
int main(){
    int r;
    float area ,circumference;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&r);
    circumference=2*3.14*r;
    area = 3.14*r*r;
    printf("the circumference of circle is %f \n",circumference);
    printf("the area of the circle is %f ",area);
    return 0;
}