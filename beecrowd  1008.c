#include<stdio.h>

int main()
{

    int em_num;
    float work_hour;
    float hour_salary;

    scanf("%d",&em_num);
    scanf("%f",&work_hour);
    scanf("%f",&hour_salary);

    float salary = work_hour*hour_salary;

    printf("NUMBER = %d\n",em_num);
    printf("SALARY = U$ %.2f\n",salary);

    return 0;
}
