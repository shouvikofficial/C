#include<stdio.h>

int main(){

int array[100], N;
printf("How many nunber:");
scanf("%d",&N);

for(int i=0;i<N;i++){
    scanf("%d",&array[i]);
}

int max = array[0];

for(int j=1;j<N;j++){
    if(max<array[j]){}
        max=array[j];
}

printf("Maximum value = %d",max);

return 0;
}
