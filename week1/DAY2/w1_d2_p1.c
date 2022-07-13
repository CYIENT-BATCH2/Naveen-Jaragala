//Day2 program 1
//Consider the phone number of a person as user input and find the sum of its digits. 
/*
Algoritham 
step1:-initilization of variables as per the requirement of client
step2:-scaning the mobile number
step3:-if there is a number the loop want to rotate to add sum the numbers upto 10 num 
step4:-print the sum of the mobile number.
*/



#include <stdio.h>
int main()
{
long int n,s=0,r=0;
printf("enter mob. no.\n");
scanf("%ld",&n);
l:
if(n) 
{ r=n%10;s=s+r;n=n/10;goto l;}
printf("%ld",s);
}


