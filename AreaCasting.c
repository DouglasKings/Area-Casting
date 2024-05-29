#include <stdio.h>
#include <stdlib.h>

int main(){

    double Length, Breadth;

    printf("Enter the length of a rectangle: \n");
    scanf("%lf", &Length);

    printf("Enter the breadth of a rectangle: \n");
    scanf("%lf", &Breadth);

    double Area = Length * Breadth;
    int area = (int)Area;

    printf("The length of a rectangle is %.2lf cm\n", Length);
    printf("The breadth of a rectangle is %.2lf cm\n", Breadth);
    printf("The area of a rectangle is %d cm^2\n", area);

    return 0;
}