#include <stdio.h>
#include <conio.h>
int main(){

int num1 = 10;
int num2 = 20;
int temp;
temp = num1;
num1 = num2;
num2 = temp;

printf("Number 1 = %d \n",num1);
printf("Number 2 = %d \n",num2);

getch();

}
