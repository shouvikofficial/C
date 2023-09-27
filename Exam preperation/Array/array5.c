#include<stdio.h>

int main(){

int array[5]= {10,20,30,40,50};
int array1[5];

for(int i=0;i<5;i++){
    array1[i]=array[i];
}

for(int i=0;i<5;i++){
    printf("%d",array1[i]);
}

return 0;

}
