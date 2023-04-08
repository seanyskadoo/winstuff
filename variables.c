#include <stdio.h>

int main(){

int mynum = 15;
char myletter= 'D' ;
    printf("%d", mynum);

//to put both variable and text

    printf("my favorite number is : %d\n",mynum);

//to print different types in a single printf

    printf("my number is %d and my letter is %c",mynum,myletter);

/*create variables
int mynum= 4 ;
float myfloatnum = 3.2;
char myletter= 'D' ;
*/
/*print variables
printf("%d"\n, mynum);
printf("%f"\n,myfloatnum);
print("%c"\n,myletter);
*/

    mynum =10 ;
    printf("\n my num is now : %d",mynum);

int myothernum = 23;
//assign value of myothernum 23 to mynum,method can be used to add a variable to an empty var
    mynum = myothernum ;

    printf("\n new num is : %d",mynum);

//adding variables
    int x = 5 ;
    int y = 6 ;
    int sum = x + y ;
    printf("\n%d",sum);


//multiple variable declaration
int a = 5 , b = 6 , c = 50 ;
printf("\n%d",a + b+ c);

return 0;
}
