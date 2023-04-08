#include <stdbool.h>

int main() {
 bool isprogrammingfun = true;
 bool isfishtasty = false;

//boolean values are returned as integers,you must use the % d to print a boolean value

printf("%d", isprogrammingfun);
printf("\n%d", isfishtasty);

//comparing values and variables
printf("\n%d", 10 > 9 ); //comparison operator can be used to return a boolean value of true

int x= 10;
int y = 9;
printf("\n%d", x > y);

//using == to compare values

printf("\n%d", 10 == 10 );
printf("\n%d", 10 == 15 );
printf("\n%d", 5 == 55 );

 return 0 ;


}
