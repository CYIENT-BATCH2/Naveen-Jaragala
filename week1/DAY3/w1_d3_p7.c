/*calculate the age of a person based on year, month as i/p
algoritham:-

step1:-include all the header files
step2:-scan the values from user
step3:-substract from 2022 and 7
*/

#include<stdio.h>
int main()
{
int age,yr,mt;
float y,m;
printf("enter year=");
scanf("%d",&yr);
printf("enter month=");
scanf("%d",&mt);
y=(2022-yr)*12;
m=7-mt;
age=(y-m)/12;
printf("age=%d",age);
}
