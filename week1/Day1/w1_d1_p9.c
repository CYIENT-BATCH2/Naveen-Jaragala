//Day1 program 9
/*Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0

   			0,1

  			1,0

   			1,1. */

/*
algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 2 numbers from the user
step3:-By using logical and are not and storing the result in the variables
step4:-print the variables*/


#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d %d",&a,&b);
printf("%d %d %d",c=a&&b,d=a||b,e=|a);
}