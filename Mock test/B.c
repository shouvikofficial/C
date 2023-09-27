#include <stdio.h>
int main(){

int x,z,y,m;

scanf("%d%d%d%d",&x,&z,&y,&m);

int withOutD = x-y;
int mBuy = withOutD*z;
int dPrice = z-m;
int dBbuy = y*dPrice;
int mM = dBbuy+mBuy;

printf("%d\n",mM);

return 0;
}
