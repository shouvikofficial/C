#include <stdio.h>
#include <conio.h>

int main(){
int row,col,N;
N=5;
for(row=1;row<=N;row++){
    for(col=1;col<=row;col++){
        printf("%c",col+64);  //col+96  ////small letter//////////
    }
    printf("\n");
}

getch();

}
