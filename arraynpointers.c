#include <stdio.h>

int main() {
int mynumbers[4]= {25,50,75,100};

int i;
//using memory address to print array elements instead in a for loop
for (i = 0 ;i < 4 ;i++)
{
    printf("%p\n", &mynumbers[i]);
}
// last number of each elements memory address is different with an addition of 4 because an int type is typically 4 bytes.

int myint;
//get memory size of int
printf("\n%lu",sizeof(myint)); //from this examples you will see compiler reserves 4 bytes of memory for each array element.which means that the entire array takes up 16 bytes 4*4 of memory storage

/*relationship of pointers and arrays.
the name of an array is actually a pointer to the first element of an array.
*/
printf("\n%p",mynumbers);
printf("\n%p",&mynumbers[0]);

//meaning you can work with arrays through pointers

printf("\n%d", *mynumbers); //first element

//to access other elements in the array you can increment the pointer/array (+1 +2 etc)
printf("\n%d",*(mynumbers+ 1)); //2nd element
printf("\n%d", *(mynumbers+2)) ;// 3rd element

//looping is also possible
int *ptr = mynumbers;
int j;
printf("\n\nlooping an array using pointer");
for (j = 0;j< 4 ; j++ )
{
    printf("\n%d",*(ptr + j));
}

//changing values of elements using pointers
printf("\n\nelement change using pointer");
*mynumbers = 13;
//2nd element
*(mynumbers + 1) = 17;
printf("\n%d", *mynumbers);
printf("\n%d",*(mynumbers+ 1));


  return 0;

}
