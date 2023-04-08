#include <stdio.h>

int main() {

 //working with strings,the fgets() is used to read a line of text and also use stdin and sizeof
 char fullname[30];
printf("\n\n enter your full name : \n");
fgets(fullname,sizeof(fullname),stdin);
printf("\nHello %s",fullname);


  return 0;

}
