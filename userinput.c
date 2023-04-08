#include <stdio.h>

int main() {
//to get user input the scanf() function would be used
//create an integer variable that will store the number from a user
int mynum;

printf("type a number : \n");

scanf("%d",&mynum); //&mynum is the reference operator which stores the memory address of the variable

printf("\n your number is %d", mynum);

//multiple inputs
char mychar;
printf("\ntype a number and a character and press enter : \n ");
scanf("%d %c" ,&mynum,&mychar);

printf("\n your number is : %d ",mynum);
printf("\n your char is : %c", mychar);


//takes string input
char firstname[30]; //for strings a char array is used since it doesnt have a string vartype but has a format specifier of %s
printf("\n\nenter name:");
scanf("%s",firstname); //also dont need to use the reference operator &
printf("\nhello %s",firstname); //scanf has limitations such as considers space meaning word seperated by space only outputs the first one

//working with strings,the fgets() is used to read a line of text and also use stdin and sizeof


  return 0;

}
