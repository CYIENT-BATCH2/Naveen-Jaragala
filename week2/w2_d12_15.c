15. Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. And replace the empty string array element as “CYIENT”



/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the array is empty and filling that with CYIENT.
step4:- print the output
*/ 


#include <stdio.h>
#include <string.h>
int main() {
    int rows,cols;
    char a[][10]={"Boach","Conti","","ZFindia","Hundai"};
    rows=(sizeof(a)/sizeof(a[0]));
    cols=(sizeof(a[0])/sizeof(a[0][0]));
    for(int i=0;i<rows;i++)
    { 
            if(!(strcmp(a[i],"")))
            {
                printf("empty position is %d index\n ",i);
                strcpy(a[i],"CYIENT");
            }
    }
    printf("after filling empty string:\n");
    for(int i=0;i<rows;i++)
    {
            printf("%s ",a[i]);
        
    }
    return 0;
}