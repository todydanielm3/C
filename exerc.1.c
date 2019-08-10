#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    printf("Horário: %s\n",__TIME__);

return 0;
}
