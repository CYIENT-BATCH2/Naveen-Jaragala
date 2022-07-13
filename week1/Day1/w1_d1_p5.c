//Day1 program 5
//5 balls are numbered with random 1-digit number each. Assign these numbers using user input. Print whether each ball is assigned odd or even number.
/*algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 5 numbers from the user
step3:-check the num is divided by 2 if it is zero then the number is even
step4:-if num is not divided by 2 then it is odd
step5:-check the same for 5 num and print even or odd

*/


#include<stdio.h>
int main()
{
int b1,b2,b3,b4,b5;
scanf("%d%d%d%d%d",&b1,&b2,&b3,&b4,&b5);
if(b1%2==0){printf("even %d\n",b1);}else{printf("odd %d\n",b1);}
if(b2%2==0){printf("even %d\n",b2);}else{printf("odd %d\n",b2);}
if(b3%2==0){printf("even %d\n",b3);}else{printf("odd %d\n",b3);}
if(b4%2==0){printf("even %d\n",b4);}else{printf("odd %d\n",b4);}
if(b5%2==0){printf("even %d\n",b5);}else{printf("odd %d\n",b5);}
}