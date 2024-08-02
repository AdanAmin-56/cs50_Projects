#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height;
    do{
        height=get_int("height;");
    }
    while(height<1||height>8);
    int i = 0;
    int j = 0;
    int space;
   {
    for(i=0;i<height;i++)
           {
            for(space=0;space<height-i;space++)
            {
                printf(" ");
            }

             for(j=0;j<=i;j++)

            {
                printf("#");
            }
            printf("  ");

            for(j=0;j<=i;j++)
            {
                printf("#");
            }
            printf("\n");

           }
   }
}
