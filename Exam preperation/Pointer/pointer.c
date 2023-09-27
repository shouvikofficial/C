#include<stdio.h>
int main(){

int x=10;
int y= 'a';
int *ptr,*ptr1;

ptr = &x;
ptr1 = &y;

printf("Address = %p\n",ptr);
printf("Addrss = %p\n",&x);
printf("Value = %d\n",x);
printf("Value = %d\n\n",*ptr);

printf("Address = %p\n",ptr1);
printf("Addrss = %p\n",&y);
printf("Value = %c\n",y);
printf("Value = %c\n",*ptr1);

return 0;

}
