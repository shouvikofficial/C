#include <stdio.h>
#include <conio.h>

int main()
{

    int row,col,N;

    printf("Inter row number = ");
    scanf("%d",&N);

    for(row=1; row<=N; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d",row);
        }
        printf("\n");

    }

    getch();
}



