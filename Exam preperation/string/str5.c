#include<stdio.h>
int main(){

char str1[50]="My name is ";
char str2[50]="Shouvik";

//length for str1

int i=0;
int len=0;

while(str1[i]!='\0'){
    i++;
    len++;
}

int j;

while(str2[j]!='\0'){
    str1[len+j]=str2[j];
    j++;
}
printf("%s",str1);

return 0;
}
