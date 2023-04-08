#include <stdio.h>

int main() {
//operators
    int sum1 = 100 + 50 ;
//variable + value
    int sum2 = sum1 + 250 ;
    printf("%d\n",sum2);
    int sum3 = sum2 + sum2;
    printf("%d\n",sum3);

 // + - * / % ++ --


 //addition assignment
 int x = 10 ;
 x +=5 ;
 printf("%d",x);
 // assigntment operators += -= *= /= %= &= ^= >>= <<=

//comparison operators != > < >= <=

//logical operators && || !

//sizeof operator
int myint;
float myfloat;
double mydouble;
char mychar;

printf("\nthe data sizes of int,float,double and char are : \n");
printf("%lu\n", sizeof(myint));
printf("%lu\n", sizeof(myfloat));
printf("%lu\n", sizeof(mydouble));
printf("%lu\n", sizeof(mychar));
//the use of %lu is used because the compiler expects the sizeof operator to return a long unsigned int instead of %d
  return 0;

}
