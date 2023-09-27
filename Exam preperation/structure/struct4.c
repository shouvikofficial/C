#include<stdio.h>

struct person{
 char name[30];
 int age;
 int salary;
};

void display(struct person p){

printf("Name: %s\n",p.name);
printf("Age: %d\n",p.age);
printf("Salary: %d\n",p.salary);

}

int main(){

struct person per1,per2;

strcpy(per1.name,"Shouvik Dhali");
per1.age = 12;
per1.salary = 12222;

display(per1);

strcpy(per2.name,"Shuvo Dhali");
per2.age = 12;
per2.salary = 12222;

display(per2);

return 0;
}



