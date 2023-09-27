#include<stdio.h>

int main(){

char name[30];

gets(name);

int i=0;
int len=0;

while(name[i]!='\0'){
    i++;
    len++;
}

printf("%d\n",len);


//length with function//

printf("%d\n",strlen(name));


return 0;
}
