#include <stdio.h>

int main() {
 int myage= 43;

/* when we assign a value to the variable,it is stored in a memory address
to access it,use the reference operator & and the result represents where the variable is stored */
 printf("%p", &myage); //outputs the memory address of myage
/* &myage is often called a pointer which basically sotres the memory address of a variable as its value.
to print pointer values we use the %p format specifier */

 printf("%d\n",myage); //outputs the value of myage

 //a pointer variable points to a data type(like int) and is created with the * operator.

 int* ptr = &myage; //a pointer variable with the name ptr that stores the address of myage.(pointer declaration)
                    /* two ways to declare pointer variables in C
                    int* myNum;
                    int *myNum;*/

 printf("%p\n",ptr); //output the memory address of myage with the pointer





  return 0;

}
