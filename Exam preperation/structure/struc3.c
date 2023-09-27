#include<stdio.h>

struct person{

char name[30];
int age;
int salary;

};

int main(){

struct person person[4];
int i;

for(i=0;i<4;i++){
    printf("Inter Information for person : %d\n",i+1);
    printf("Inter name :");
    fflush(stdin);
    gets(person[i].name);
    printf("Enter age:");
    scanf("%d",&person[i].age);
    printf("Enter salary:");
    scanf("%d",&person[i].salary);
}

for(i=0;i<4;i++){
    printf("Information for person : %d\n",i+1);
    printf("Name: %s\n",person[i].name);
    printf("Age:%d\n",person[i].age);
    printf("Salary:%d\n",person[i].salary);
}


return 0;
}
