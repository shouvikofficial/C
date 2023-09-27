#include<stdio.h>

void oddEvenCheck(int num1){
    if(num1%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }

}

int main(){
    int num;
    printf("Inter an integer number:");
    scanf("%d",&num);
    oddEvenCheck(num);

return 0;
}
