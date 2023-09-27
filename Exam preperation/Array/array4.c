 #include<stdio.h>

int main(){

int i,j;
int array[3][3];
int array1[3][3];
int array2[3][3];

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&array[i][j]);
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d",array[i][j]);
        printf("\n");
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&array1[i][j]);
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\n",array1[i][j]);
    }
    printf("\n");
}
//sum///

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       array2[i][j] = array[i][j]+array2[i][2];
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\n2",array2[i][j]);
    }
    printf("\n");
}


 return 0;
 }
