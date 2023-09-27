#include<stdio.h>
int main(){

int N;
int array[100];
int sum=0;

printf("How many Number :");
scanf("%d",&N);
for(int i=0;i<N;i++){
    scanf("%d",&array[i]);
}

for(int j=0;j<N;j++){
    sum = sum+array[j];
}
printf("%d\n2",sum);
printf("Avarage =%.2f\n",(float)sum/5);

return 0;
}
