#include <stdio.h>

int main() {
 int i;
 for (i = 0;i <10 ;i++)
 {
     if (i ==4 )
     {
         break;
     }
    printf("%d\n",i);
 }

//continue breaks an iteration in the loop
int j;
    for (j = 0 ;j < 10 ; j++)
    {
        if (j == 4 )
        {
            continue;
        }
    printf("%d\n",j);
    }


//break and continue in while loops
//break
int h = 0;
while (h< 10 )
    {
    if (h == 4)
    {
        break;
    }
    printf("%d",h);
    h++;
    }
//continue
int k = 0;
while (k< 10 )
{
    if(k==4)
       {
        k++;
        continue;
       }
       printf("%d\n",k);
       k++;
}


return 0;

}
