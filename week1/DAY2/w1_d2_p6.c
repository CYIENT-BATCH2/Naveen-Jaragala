////Day2 program 6
//Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 
/*
algoritham:-
step1:-initilization of variables as per the requirement of client
step2:-scan the Fahrenheit and Celsius from the user.
step3:-to convert from Celsius to Fahrenheit((c*9/5)+32)from Fahrenheit to Celsius((f-32)/(9/5))
step4:-print the Celsius to Fahrenheit which ever you want (note:-we can also use while to select which ever we want to convert).

*/

#include <stdio.h>
int main()
{
float c,f;
scanf("%f %f",&c,&f);
if(c)
{
f=(c*9/5)+32;
printf("%.2f\n",f);
}
else{
c=(f-32)/(9/5);
printf("%.2f",c);}
}
}

