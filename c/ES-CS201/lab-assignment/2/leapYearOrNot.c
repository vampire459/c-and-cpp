#include <stdio.h>

/* Program to check if the entered year is a leap year */

void main()
{
    int y;
    printf("\n enter a year : ");
    scanf("%d",&y);
    if(y%400==0 || y%100!=0 && y%4==0)
        printf("\n %d is a leap-year",y);
    else
        printf("\n %d is not a leap-year",y);

}
