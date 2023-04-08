#include <stdio.h>
//arrays
int main() {
 int mynumbers[] = {25,50,75,100};
 printf("%d",mynumbers[0]);
 mynumbers[0]= 33;

 printf("\n%d",mynumbers[0]);

 //loop through array
 printf("\n\narray loop ");
 int i;
 for (i = 0 ;i< 4 ;i++)
 {
    printf("\n%d", mynumbers[i]);
 }

//set array size
//declare an array of 4 integers
int myarray[4];
//add elements
myarray[0] = 25;
myarray[1] = 50;
myarray[2] = 75;
myarray[3] = 100;
//you cannot change the size of the array after creation


//multidimensional arrays
printf("\nmulti dimension arrays");
int matrix[2][3] = {{1,4,2}, {3,6,8}};
//first dimension [2] shows the number of rows
//second dimension [3] shows the number of columns
printf("\n%d",matrix[0][2]);

//change elements in a 2d array
matrix[0][0]=9;
printf("\n%d", matrix[0][0]);

//loop through a 2d array
printf("\n\nlooping through array");
int a,b;
for (a=0;a<2; a++)
{
    for(b=0;b < 3 ;b++)
    {
        printf("\n%d",matrix[a][b]);
    }
}

return 0;

}
