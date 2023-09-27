//string reverse
#include<stdio.h>
int main(){
char fName[20]="Shouvik";
char lName[20];

int i=0,j,len=0;
while(fName[i]!='\0'){
    i++;
    len++;
}

for(j=0,i=len-1;i>=0;i--,j++){
    lName[j]=lName[i];
}
printf("%s\n",lName);



return 0;
}
