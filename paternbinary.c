#include <stdio.h>
#include <conio.h>

int main(){

int row,col,N;
N= 6;

for(row=1;row<=N;row++){
    for(col=1;col<=row;col++){
        printf("%d",col);
    }
        printf("\n");
}

getch();

}
