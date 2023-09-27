#include<stdio.h>
int main(){

char name[15];
char com[15]= "Shouvik";
char reverse[15];
printf("Type your name:");
scanf("%s",&name);

int C = strcmp(name,com);
if(C==0){
    printf("Equal\n");
}else{
    printf("Not equal\n");
}
int i=0;
int len=0;
int j;
while(name[i]!='\0'){
    i++;
    len++;
}

printf("%d\n",len);

for(j=0,i=len-1;i>=0;i--,j++){
    reverse[j]=name[i];
}
reverse[j]='0';
printf("%s\n",reverse);


return 0;
getch();
}
