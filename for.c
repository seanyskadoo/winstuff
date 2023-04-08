#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n",i);
    }

//nested loops
    int h,j;
//outerloop
    for (h = 1; h <=2 ;h++)
    {
    printf("Outer:%d \n",h );
    for(j =1; j<= 3;j++)
        {
            printf(" Inner:%d \n",j);
        }
    }





  return 0;
}
