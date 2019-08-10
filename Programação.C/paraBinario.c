#include <stdio.h>

int main(){

    int a;
    char b[10];

    printf("DIGITE UM VALOR EM DECIMAL:\n\n\n");
    scanf("%d",&a);

    itoa(a,b,2);

    printf("\n\n%d em octal: %o\n",a,a);
    printf("%d em binario: %s \n",a,b);
    printf("%d em hexadecimal: %X\n\n\n",a,a);

    system("pause");

return 0;
}
