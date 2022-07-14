//Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.


/*
algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers from the user
step3:-sum the numbers which it the first and the last but one 
step4:-print the sum output
*/




#include<stdio.h>
int main()
{
int n,r1=0,r=0,s=0,c=0;
scanf("%d",&n);
l:
if(n){r=n%10;c++;if(c==2){r1=r;}n=n/10;goto l;}
printf("%d",s=r1+r);
}
