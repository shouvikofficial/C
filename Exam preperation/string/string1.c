#include<stdio.h>

int main(){

char name[30];
printf("Inter your name:");
gets(name);

int i=0;
while(name[i]!='\0'){
    printf("%c\n",name[i]);
    i++;
}

return 0;
}
