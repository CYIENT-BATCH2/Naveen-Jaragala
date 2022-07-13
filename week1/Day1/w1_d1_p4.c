//Day1 program 4
//Take a 6-digit number as input from the user and reverse the number. Make sure that the number does not include a ‘0’ in any of its digits.
/*
algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the number from the user
step3:-check given digit is 6 digit num or not
step4:-if it is a 6 digit number then by applying module and dividing the num and saving the sum in the variable
step5:-print the sum of the remainder*/

#include<stdio.h>
int main()
{
int n,r=0,s=0;
scanf("%d",&n);
if(n>100000&&n<999999){}
else{printf("not in a range");}
l:
if(n)
{   r=n%10;
    if(r==0){ printf("invalid num it has zero\n");}
    s=s*10+r;
    n=n/10;
    goto l;
}printf("%d",s);
}