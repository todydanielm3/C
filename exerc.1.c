#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    printf("Hor�rio: %s\n",__TIME__);

return 0;
}
