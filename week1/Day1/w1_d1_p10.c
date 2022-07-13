//Day1 program 10
//Consider the weights of three people as user input. Find the heaviest among them and print it.
/*
algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 3 numbers from the user
step3:-By using the conditional operators we can find the greatest of 3 numbers

*/


#include<stdio.h>
int main()
{
int a,b,c,s;
scanf("%d %d %d",&a,&b,&c);
(a>b?((a>c)?(printf("%d",a)):(printf("%d",c))):((b>c)?(printf("%d",b)):(printf("%d",c))));
}