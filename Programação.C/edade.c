#include <stdio.h>
#include <stdlib.h>

int f(int a[],int n){
    if (n<=0)return 1;
    return a[n-1] * f(a,n-2) +1;
}

int a[6]={0,1,2,3,4,5};

int main(){
printf("%d\n",f(a,6));
}
