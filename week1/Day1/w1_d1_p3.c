//Day1 program 3
//The entire area of a circular garden is to be covered with grass by a Gardener. The radius of the garden is given by the user input. Calculate the area that has to be covered.
/*
algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the Radius from the user
step3:-checking the circumference of a circle 
step4:-print the circumference.
*/

#include<stdio.h>
int main()
{
int r,c;
scanf("%d",&r);
c=3.14*r*r;
printf("%d",c);
}