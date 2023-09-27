#include<stdio.h>

int main(){

int mark[4];
//scanf("%d",&mark[0]);
//scanf("%d",&mark[1]);
//printf("%d\n",mark[0]);
//printf("%d\n",mark[1]);

for(int i =0;i<=4;i++){
    printf("Inter 2 data :");
    scanf("%d",&mark[i]);
}

for(int j=0;j<=4;j++){
    printf("Data are %d\n",mark[j]);
}


return 0;

}
