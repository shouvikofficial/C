#include<stdio.h>

int main()
{

    char name[20];
    float salary;
    float sales_m;

    scanf("%s",&name);
    scanf("%f",&salary);
    scanf("%f",&sales_m);


    double salaryPer = 0.15*sales_m;
    double total = salary + salaryPer;

    printf("TOTAL = R$ %.2f\n",total);


    return 0;
}


