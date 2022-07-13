//Day 2 program 4
//Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.
/*
Alogoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 2 numbers from the user first and last limts
step3:-checking the condition whether the num has 3 in it or not 
step4:-if it has 3 in the number print it 
step5:-increment the number until it reaches to last number and check whether the number has 3 are not
*/

#include<stdio.h> 
intmain()
 { 
int n1,n2,r=0,k=0,s,t=0; 
scanf("%d%d",&n1,&n2); 
l: 
if(n1<=n2)
 {
k=n1; 
s=n1;
 whl: 
if(s!=0) {
 r=s%10;
 if(r==3)
{ 
printf("%d",k);
goto out;
 }
s/=10; 
goto whl;
 }
 out:
 n1++; 
goto l;
 } } 

   

