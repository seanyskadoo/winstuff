#include <stdio.h>

int main() {
  //create variables
  int mynum = 5; //int
  float myfloatnum = 5.99; //float
  char myletter = 'D';  //char

  printf("\n%d", mynum);
  printf("\n%f",myfloatnum);
  printf("\n%c",myletter);


//decimal precision
double mydoublenum = 19.99;
printf("\n%lf", mydoublenum);
//use a . followed by a number to specify number of digits shown
printf("\n%.1f",mydoublenum);
printf("\n%.2f",mydoublenum);
printf("\n%.4f",mydoublenum);
return 0;
}
