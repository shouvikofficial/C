#include <stdio.h>
#include <conio.h>

int main()
{

    int row,col,N=4;

    for(row=1; row<=N; row++)
    {
        for(col=1; col<=N-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");


    }
    getch();
}
