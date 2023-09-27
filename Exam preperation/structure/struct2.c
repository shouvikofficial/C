#include<stdio.h>

struct person{

int age;
int salary;
};
int main(){

struct person per3 = {40,4000};
struct person per1,per2;

per1.age = 12;
per1.salary = 10000;

per2 = per1;

if(per1.age==per2.age&&per1.salary==per2.salary){
    printf("Equal\n");
}else{
    printf("NOt Equal\n");
}

printf("Age : %d\n",per3.age);
printf("Salary : %d\n",per3.salary);




return 0;
}
