#include<stdio.h>

struct student{

char name[30];
int age;
int salary;

};


int main(){

struct student stu1,stu2;
struct student *ptr1, ptr2;

ptr1 = &stu1;
ptr1 = &stu1;

printf("Enter Student name,age,salary : ");
scanf("%s %d %d",&stu1.name,&stu1.age,&stu1.salary);

printf("Name : %s",ptr1->name);
printf("Age : %d",ptr1->age);
printf("Name : %d",ptr1->salary);



return 0;
}
