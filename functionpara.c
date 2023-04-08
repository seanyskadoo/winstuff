#include <stdio.h>

 void myfunction(char name[])
    {
    printf("Hello %s \n",name);
    }
int main() {

   myfunction("liam");
   myfunction("sean");
   myfunction("anja");



//multiple parameters
void myfunction2(char namae[],int age)
{
    printf("\nHello %s. you are %d years old",namae,age);
}

 myfunction2("liam",4);
 myfunction2("sean",5);


void arrayfunc(int mynumbers[5])
{
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n%d\n",mynumbers[i]);
    }
}
int mynumbers[5]={10,20,30,40,50};
    arrayfunc(mynumbers);


/*function declaration and definition good prac
 Function declaration
int myFunction(int, int);

 The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

 Function definition
int myFunction(int x, int y) {
  return x + y;
}*/

    return 0;

}
