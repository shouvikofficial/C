#include<stdio.h>

int main(){

int x=10;
int y=20;
int z=43;
int *p1,*p2,*p3;

p1 = &x;
p2 = &y;
p3 = &z;

if(*p1>*p2 && *p1>*p3){
    printf("%d",*p1);
}else if(*p2>*p1 && *p2>*p3){
    printf("%d",*p2);
}else{
    printf("%d",*p3);
}

return 0;
}
