#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height here: ");
    }
    while (height < 1 || height > 8);
       int i=0;
       int j=0;
       int k=0;

    for (i=0; i < height; i++)
    {
    int m = i;
        if (i==m)

        {
            for (j=0; j<height; j++)
            {
                if (j>=height-i-1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            }
            printf(" ");
            for (k=height-i-1; k<height; k++)
            {
                printf("#");
                            }
        }
    printf("\n");

    }

}
