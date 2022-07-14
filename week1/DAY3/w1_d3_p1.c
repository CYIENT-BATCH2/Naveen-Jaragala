/*Write a program to achieve below statements.

Collect 15 elements (8 integers, 7 float) as i/p from user. 

Calculate and Print the sum, average and mean of integers

Calculate and Print the sum, average of all float values

Divide sum in statement ‘b’ with statement ‘c’ sum and print the value.

Divide average in statement ‘b’ with statement ‘c’ average and print the value.

Convert all 7 float values to integers and print them.*/


/*
algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the integer and float numbers.
step3:-the numbers do the sum and average of intergers and float and divide the integer sum with float and vice versa for average.
step4:-print the output
*/




#include<stdio.h>
int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,s=0,a=0,m=0;
float m1,m2,m3,m4,m5,m6,m7,s1=0,a1=0,fm=0,k=0,k1=0;
scanf("%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8);
scanf("%f%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6,&m7);
s=n1+n2+n3+n4+n5+n6+n7+n8;
a=s/8;
//m=s%8;
printf("%d %d %d\n",s,a,m);
s1=m1+m2+m3+m4+m5+m6+m7;
a1=s1/7;
//fm=s1%7;
printf("%f %f %f\n",s1,a1,fm);
k=s/s1;
printf("%f\n",k);
k1=a/a1;
printf("%f\n",k1);
printf("%d%d%d%d%d%d%d\n",m1,m2,m3,m4,m5,m6,m7);
printf("%f %f %f %f %f %f %f\n",m1,m2,m3,m4,m5,m6,m7);
}
