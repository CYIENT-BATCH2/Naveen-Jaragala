13. Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. (Make number of elements as configurable value)

How binary search works is explained below.



/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- implement sorting technique and taking input from user and search in that array.
step4:- print the output
*/ 




#include <stdio.h>

int main() {
    // Write C code here");
    int a[]={22,55,99,3,66,33,69,45,19},rows,root,x,num;
    rows=sizeof(a)/sizeof(a[0]);
    x=(rows/2)-1;
    root=a[x];
    printf("enter the number that u want to search:");
    scanf("%d",&num);
    if(num<root)
    {
        for(int i=0;i<x;i++)
        {
            if(num==a[i])
            printf("index of searched num is %d",i);
        }
    }
    else
    {
        for(int i=x;i<rows;i++)
        {
            if(num==a[i])
            printf("index of searched element is %d",i);
        }
    }
    return 0;
}