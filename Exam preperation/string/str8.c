#include<stdio.h>

int main(){

char str1[30];
char str2[30];

printf("Inter your name:");
gets(str1);

int i=0;
int len=0;

while(str1[i]!='\0'){
    i++;
    len++;
}

int j;

for(j=0,i=len-1;i>=0;i--,j++){
    str2[j]=str1[i];
}
str2[j]!='\0';

printf("%s\n",str2);

int d= strcmp(str1,str2);

if(d==0){
    printf("Panaldulum");
}else{
    printf("Not");
}


return 0;
}
