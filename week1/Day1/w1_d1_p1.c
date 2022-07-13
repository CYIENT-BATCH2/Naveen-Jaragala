//Day1 program 1
//We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11. Print “SPECIAL” if the given non-negative number is special. Use the % "mod" operator.

/*algorithams:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the number from the user
step3:-checking the num by dividing with 11 and remainder want to be 0 or 1
step4:-if remainder is 0 or 1 then print it is special 

*/

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%11==0||n%11==1)
{printf("special"); }
else { printf("not specified");}
}

