#include <stdio.h>

int main()
{
	int n, c, k, space = 1;

	printf(“Enter the number of rows\n”);
	scanf(“%d”, &n);

	space = n – 1;

	for (k = 1; k <= n; k++)
	{
		for (c = 1; c <= space; c++)
		printf(” “);
		space–;
		for (c = 1; c <= 2*k-1; c++)
			printf(“*”);
		printf(“\n”);
	}
	space = 1;

	for (k = 1; k <= n – 1; k++)
	{
		for (c = 1; c <= space; c++)
		printf(” “);
		space++;
		for (c = 1 ; c <= 2*(n-k)-1; c++)
			printf(“*”);
		printf(“\n”);
	}
	return 0;
}


#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  //bottom left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j)  // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}



