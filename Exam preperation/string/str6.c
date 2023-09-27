#include<stdio.h>
int main(){

char str1[30]="Shouvik";
char str2[30]="Shouvik Dhali";

int d = strcmp(str1,str2);

if(d==0){
    printf("Equal");
}else{
    printf("Not Equal");
}

return 0;
}
