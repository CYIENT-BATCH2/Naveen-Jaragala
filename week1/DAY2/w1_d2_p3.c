////Day2 program 3
//It was Raj's first day at school. His teacher asked the students to meet every other student in the class and to introduce themselves. The teacher asked them to give handshakes when they meet each other. If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.

/*algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the number from the user
step3:-By using (n=n*(n-1)/2) we can calculate the no of handshakes.
step4:-print the total number of hand shakes.
*/

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
n=n*(n-1)/2;
printf("%d",n);
}
