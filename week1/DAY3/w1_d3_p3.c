
//Write a program to reverse a 3-digit number which is entered from keyboard. 

/*
algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers which we waqnt to reverse.
step3:-check the numbers is 3 digit or not as per user input if its 3 digit then reverse the number.
step4:-print the reversed numbers as output
*/






#include<stdio.h>
int main()
{
int n,c=0,r=0,s=0;
printf("enter the 3 digit num to reverse:-");
scanf("%d",&n);
l:
if(n){r=n%10;c++;s=s*10+r;n=n/10;goto l;}
if(c==3){printf("%d",s);}
else {printf("not a 3 digit num");}
}