//Day2 program 7
//Find the number of leap years in the interval 1990-2022.
    
  /*

algoritham:-
step1:-initilization of variables as per the requirement of client
step2:-scan the two inputs from the user from where to where we want to find the leapyears.
step3:-checking the condition of leapyear((0==f%4)&&(0!=2)||(0==f%400))
step4:-if it satisfies the condition print that year
step5:-increment the year and check the condition until it reaches to the end.
*/

#include<stdio.h>
int main()
{ 
int f,l;
   scanf("%d %d",&f,&l);
     i:
   if(f<l)
   {
       if((0==f%4)&&(0!=2)||(0==f%400))
       {
           printf("%d\n",f);
       }f++;
       goto i;
   }
}