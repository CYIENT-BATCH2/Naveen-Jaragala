//Day1 program 6
/*Students with roll numbers 1-9 are seated in ascending order in an examination hall. There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped. Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.
*/

/*algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 9 numbers from the user
step3:-check each and every number with other and swap if it was not in ascending order
step4:-print the all 9 numbers after all the numbers is swapped
*/

#include<stdio.h>
int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9;
scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
l:
if (n1>n2){n1+=n2;n2=n1-n2;n1-=n2;goto l;}
if (n2>n3){n2+=n3;n3=n2-n3;n2-=n3;goto l;}
if (n3>n4){n3+=n4;n4=n3-n4;n3-=n4;goto l;}
if (n4>n5){n4+=n5;n5=n4-n5;n4-=n5;goto l;}
if (n5>n6){n5+=n6;n6=n5-n6;n5-=n6;goto l;}
if (n6>n7){n6+=n7;n7=n6-n7;n6-=n7;goto l;}
if (n7>n8){n7+=n8;n8=n7-n8;n7-=n8;goto l;}
if (n8>n9){n8+=n9;n9=n8-n9;n8-=n9;goto l;}
printf("%d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9);
}