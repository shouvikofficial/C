#include <stdio.h>

int main() {
    int A,B,C,D,count=0;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A == 1)
    {
    count++;
    printf("YES\n");
    }
    else
    {
        if(B == 1)
        count++;
        if(C == 1)
        count++;
        if(D == 1)
        count++;
        if(count>=2)
        printf("YES\n");
        else
        printf("NO\n");
    }

    return 0;
}
