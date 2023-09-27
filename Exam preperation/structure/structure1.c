#include<stdio.h>

struct person{
    int age;
    float salary;
};

int main(){

struct person per1,per2;

printf("Person one:\n");
printf("Inter age:");
scanf("%d",&per1.age);
printf("Inter salary:");
scanf("%f",&per1.salary);

printf("Person two:\n");
printf("Inter age:");
scanf("%d",&per2.age);
printf("Inter salary:");
scanf("%f",&per2.salary);


printf("Age : %d\n",per1.age);
printf("Salary : %f\n",per1.salary);

printf("Age : %d\n",per2.age);
printf("Salary : %f\n",per2.salary);


return 0;
}
